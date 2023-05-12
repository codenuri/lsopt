// art of computer programming  - knuth

#include <stdio.h>
#include <string.h>

// 1. 문자열에서 한문자 찾기

char S[] = "abc abcdab abcdabcdabde"; // 23자
char D = 'd';

const int s_size = 23; // 문자열 갯수

int main()
{
	int i = 0;

	for (i = 0; i < s_size; i++)
	{
		if (S[i] == D)
		{
			printf("find : %d\n", i);
			break;
		}
	}


	printf("%d\n", i);
}


