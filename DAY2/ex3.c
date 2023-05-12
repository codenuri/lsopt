#include <stdio.h>

int main()
{
	// 사용자가 -1일 입력할때 까지 계속 입력 받고싶다.

//	int score[4]; // 이렇게 하면 필요없을때 지울수 없다

	int size = 4; // 현재 버퍼의 크기
	int* score = (int*)malloc(sizeof(int) * size);

	int cnt = 0;	// 입력된 갯수


	int n = 0;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == -1) break;

		score[cnt++] = n; // 보관

		if (size == cnt)
		{
			int* temp = (int*)malloc(sizeof(int) * size * 2);

			memcpy(temp, score, sizeof(int) * size);

			free(score);

			score = temp;

			// 마지막 남은 작업은 ?
			size *= 2;
		}
	}

	printf("메모리 크기(capacity) : %d\n", size);
	printf("입력된 갯수 : %d\n", cnt);

	for (int i = 0; i < cnt; i++)
	{
		printf("%d ,", score[i]);
	}

	free(score);
}
// 위 코드가 C++ STL 의 vector 가 
// 메모리를 관리하는 방식 입니다.
// 흔히 "동적 배열" 이라고 합니다.