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
	// .idata section �� �޸𸮸� ���� �����ϰ� ����
	DWORD old;
	VirtualProtect((void*)0x�ּ�, PAGE_READWRITE, &old);


	*((int*)0x�ּ�) = (int)&foo;


	mul(1, 2);
}
