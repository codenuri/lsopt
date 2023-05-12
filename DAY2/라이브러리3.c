#include <stdio.h>
#include <Windows.h>
#include "mul.h"
#pragma comment(lib, "mul.lib")
	
int foo(int a, int b)
{
	printf("foo");
	return 0;
}
int __stdcall goo(int a, const char* b , const char* c, int n)
{
	printf("goo");
	return 0;
}
int main()
{
	// .idata section 의 메모리를 쓰기 가능하게 변경
	DWORD old;
	VirtualProtect((void*)0x041B098, 100,  PAGE_READWRITE, &old);

	*((int*)0x041B098) = (int)&goo;

//	mul(1, 2);
	MessageBoxA(0, "aa", "bb", 0);
}
