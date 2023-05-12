#include <stdio.h>

// 비용이 적은 연산자를 사용하라.
int main()
{
	int i = 3;

	// % 연산자 보다 비트 연산자가 빠르다.
//	if (i % 2 == 1) // bad
	if (i & 1)	    // good
	{ 
		printf("%d 는 홀수 입니다 \n", i); 
	} 


	int i = 352;

	// 나눗셈은 아주 느리다. 
	// SHIFT 는 아주 빠르다.
	int ret1 = i / 32; // bad
	int ret2 = i >> 5; // good


	

}