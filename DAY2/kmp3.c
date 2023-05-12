
#include <stdio.h>
#include <string.h>


char S[] = "abc abcdab abcdabcdabde";
char D[] = "abcd";

const int s_size = 23; 
const int d_size = 4;

// 핵심 
// => "abcd" 안에는 중복되는 문자가 없다!!
// => "d" 에서 같지 않다고 판단되면 i = 3 으로 바로 이동해도 되지
//    않을까 ?


int main()
{
	int i = 0;
	int j = 0;

	for (i = 0; i < s_size ; i++)
	{
		if (S[i] == D[j])
		{
			if (j == d_size - 1)
			{
				printf("find : %d\n", i - d_size + 1 );
				break;
			}
			else
				++j;
		}
		else
		{
			j = 0;
		}
	
	}
}


