#include <stdio.h>

// 함수의 반환값 : 약속된 레지스터(EAX)를 통해서 전달
// 함수의 인자   : 32bit : 스택, 
//				 64bit : 4개까지 레지스터(환경에 따라 다를수 있음) 

int add(int a, int b)
{
	int c = 0;
	c = a + b;

//	return c;

	__asm
	{
		mov eax, c		// return c
	}
}
int main()
{
//	int n = add(1, 2);
	int n = 0;

	__asm
	{
		push    2
		push    1
		call	add 
		add	    esp, 8

		mov     n, eax
	}

	printf("%d\n", n);
}