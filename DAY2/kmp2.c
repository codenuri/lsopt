// art of computer programming  - knuth

#include <stdio.h>
#include <string.h>

// 2. ���ڿ����� ���ڿ� ã��

char S[] = "abc abcdab abcdabcdabde"; // 23��
char D[] = "abcd";

const int s_size = 23; // ���ڿ� ����
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
			if (S[i + j] != D[j]) // ���ڰ� �ٸ���
				break;			  // inner loop Ż��

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


