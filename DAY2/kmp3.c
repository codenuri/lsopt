
#include <stdio.h>
#include <string.h>


char S[] = "abc abcdab abcdabcdabde";
char D[] = "abcd";

const int s_size = 23; 
const int d_size = 4;

// �ٽ� 
// => "abcd" �ȿ��� �ߺ��Ǵ� ���ڰ� ����!!
// => "d" ���� ���� �ʴٰ� �ǴܵǸ� i = 3 ���� �ٷ� �̵��ص� ����
//    ������ ?


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


