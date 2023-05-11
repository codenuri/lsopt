// 함수포인터1.cpp
#include <stdio.h>
// 함수 이름 : add
// 함수 타입 : int (int, int)
int add(int a, int b)
{
	return a + b;
}

int main()
{
	// 1. 선언문에서 변수 이름만 제거하면 타입 입니다.
	int n;		// 이름 : n,  타입 : int
	double d;	// 이름 : d,	 타입 : double
	int x[3];	// 이름 : x,  타입 : int[3]
	// => 위 add 함수 타입 알아 두세요

	// 2. 포인터 변수는 대상 타입과 동일한 타입의 변수앞에 * 붙이세요
	int (*p1)[3] = &x;

	int (*p2)(int, int) = &add;
	int (*p2)(int, int) = add; // ok

	// 배열이름 : 배열의 1번째 요소 주소로 변환 가능
	// 함수이름 : 함수의 주소로 변환 가능

	// => 결국 함수 포인터와 배열포인터를 만드는 방법은
	//    동일 합니다.

	// 함수 타입 :       int(int, int)
	// 함수 포인터 타입 : int(*)(int, int)

	// 배열 타입 : int[3];
	// 배열 포인터 타입 : int(*)[3];
}









