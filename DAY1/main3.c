#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

void foo()
{
	char s[4];

	strcpy(s, "abcd12345678"); 
		// ����� �߻��Ǿ������ ?
}
int main()
{
	foo();
}
