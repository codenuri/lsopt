#include "counter.h"

// 루프에서는 포인터를 "dereferencing" 사용하지 말라.

// [first ~ last] 구간의 합을 s 에 담는 함수. 
void bad(int first, int last, int* s)
{
	for (int i = first; i <= last; i++)
	{
		*s += i;
	}
}

void good(int first, int last, int* s)
{
	int local = *s;

	for (int i = first; i <= last; i++)
	{
		local += i;
	}
	*s = local;
}




int main()
{
	int s1 = 0;
	int s2 = 0;
	CHECK(START);
	bad(1,  1000000, &s1);
	CHECK(LAB);
	good(1, 1000000, &s2);
	CHECK(END);
}