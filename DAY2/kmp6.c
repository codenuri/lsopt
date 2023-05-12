
#include <stdio.h>
#include <string.h>


char S[] = "abc abcdab abcdabcdabde";
char D[] = "abcdabd";

const int s_size = 23;
const int d_size = 7;

int fail[7] = { 0 };

void init_fail()
{
	for (int i = 1, j = 0; i < d_size; i++)
	{
		while (j > 0 && D[i] != D[j])
			j = fail[j - 1];

		if (D[i] == D[j])
			fail[i] = ++j;
	}
}

int main()
{
	init_fail();

	int i = 0;
	int j = 0;

	for (i = 0; i < s_size; i++)
	{
		if (S[i] == D[j])
		{
			if (j == d_size - 1)
			{
				printf("find : %d\n", i - d_size + 1);
				break;
			}
			else
				++j;
		}
		else
		{
			j = fail[j - 1];
		}

	}
}


