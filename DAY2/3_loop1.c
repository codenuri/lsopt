#include "counter.h"

// loop1. ������ ���� ����϶�

void foo(int n) {n = 10;}

void bad()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		foo(i);
	}
}

void good()
{
	foo(0);
	foo(1);
	foo(2);
}

int main()
{
	bad();
	good();
}
