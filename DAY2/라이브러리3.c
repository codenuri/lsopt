#include <stdio.h>
#include <Windows.h>
#include "mul.h"
#pragma comment(lib, "mul.lib")
	
int foo(int a, int b)
{
	printf("foo");
	return 0;
}

int main()
{
	// .idata section 의 메모리를 쓰기 가능하게 변경
	*((int*)0x주소) = (int)&foo;


	mul(1, 2);
}
