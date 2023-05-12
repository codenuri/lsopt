#include "counter.h"

#define SIZE 10000

int arr[SIZE][SIZE]; // 10000*10000 2차원 배열

void good()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			// 모든 요소 접근이 메모리 순서대로 접근
			// 빠르다.
			// 캐쉬에 있는 것을 모두 사용후 다음 요소!
			arr[i][j] = 0;
		}
	}
}

void bad()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			// 핵심. [i][j] 가 아닌 [j][i]
			arr[j][i] = 0;
		}
	}
}
int main()
{
	good();
	bad();
}