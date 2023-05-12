// art of computer programming  - knuth

#include <stdio.h>
#include <string.h>

// 2. 문자열에서 문자열 찾기

char S[] = "abc abcdab abcdabcdabde"; // 23자
char D[] = "abcd";

const int s_size = 23; // 문자열 갯수
const int d_size = 4;

int main()
{
	int i = 0;
	int j = 0;
	int find_flag = 0;

	for (i = 0; i < s_size; i++)
	{
		for (j = 0; j < d_size; j++)
		{
			if (S[i + j] != D[j]) // 문자가 다르면
				break;			  // inner loop 탈출

			if (j == d_size - 1)
			{
				printf("find : %d\n", i);
				find_flag = 1;
				break;
			}
		}
		if (find_flag == 1) break;
	}
}


