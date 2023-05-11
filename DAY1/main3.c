#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

void foo()
{
	char s[4];

	strcpy(s, "abcd12345678"); 
		// 어떤일이 발생되었을까요 ?
}
int main()
{
	foo();
}
