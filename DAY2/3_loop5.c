#include <string.h>
#include "counter.h"

// �ݺ������� �Լ� ȣ�� ����

void bad()
{
	char s[] = "to be or not to be";

	// �Ʒ� �ڵ�� strlen() �Լ��� ���ڿ��� ���� ��ŭ ȣ��˴ϴ�.
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
			s[i] = '*';
	}
}

void good()
{
	char s[] = "to be or not to be";

	unsigned int sz = strlen(s);
	
	for (unsigned int i = 0; i < sz; i++)
	{
		if (s[i] == ' ')
			s[i] = '*';
	}
}


int main()
{
	bad();
	good();
}