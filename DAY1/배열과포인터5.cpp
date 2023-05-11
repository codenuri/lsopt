#include <stdio.h>

// ? 완성해 보세요
// 인자로 2차 배열을 받을때는 아래 처럼 하면 됩니다.
void foo( int(*p)[2] ) {}

int main()
{
	int x[3][2] = { 1,2,3,4,5,6 };

	foo(x); 

	int y[3][2][2] = { 0 };

	int (*p1)[3][2][2] = &y;
	int (*p2)[2][2] = y;

}

