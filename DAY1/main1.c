#include <stdio.h>

// �Լ��� ��ȯ�� : ��ӵ� ��������(EAX)�� ���ؼ� ����
// �Լ��� ����   : 32bit : ����, 
//				 64bit : 4������ ��������(ȯ�濡 ���� �ٸ��� ����) 

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