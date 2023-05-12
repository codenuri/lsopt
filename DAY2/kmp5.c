#include <stdio.h>
#include <string.h>

// fail 함수 : 주어진 문자열의 [0, N] 구간에서
//			  접두어와 접미어중 중복된 문자열의 최대 갯수 

// 문자열이 "abcdabd" 인 경우의 fail 함수
// fail(N) 은 [0, N] 번째 문자열
// fail(0) "a"			=> 0
// fail(1) "ab"			=> 0
// fail(2) "abc"		=> 0
// fail(3) "abcd"		=> 0
// fail(4) "abcda"		=> 1
// fail(5) "abcdab"		=> 2
// fail(6) "abcdabd"	=> 0

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

	for (int i = 0; i < d_size; i++)
	{
		printf("%d : %d\n", i, fail[i]);
	}
}
