// 배열과포인터1.cpp - 51 page
#include <stdio.h>

int main()
{
	int n = 10;
	double d = 3.4;

	// 포인터 변수를 만드는 방법
	// 1. 주소를 구하려면 변수이름 앞에 & 연산자를 붙인다
	// 2. 포인터 변수를 만들려면 대상타입과 동일타입의 변수이름 앞에 *를
	//    붙인다.
	int    *p1 = &n;
	double *p2 = &d;

	int x[3] = { 1,2,3 };

	// x의 주소를 담는 포인터 변수 p3를 만들어 보세요
	int *p3 = x; // ?? 이건 배열 x의 주소가 아닙니다.

//	int *p4[3] = &x; // 연산자 우선순위 가 * 보다 [] 높습니다.
					// 그래서, 컴파일러가 p4 를
					// 포인터가 아닌 배열로 생각..
					// 배열은 {}로 초기화 해야 하므로 에러

	int (*p4)[3] = &x; // ok. p4가 배열의 주소를 담는 포인터
						// 입니다.
						// () 는 * 연산자의 우선순위를 
						// [] 보다 높게 하기 위해
}
// 대부분은 데이타 타입이 왼쪽에 있습니다.
/*
int n;
double d;

// 그런데.. 배열은 타입이 변수 양쪽에 있습니다.
int x[3]; // 변수 : x    타입 : int[3]

// 아래 처럼 설계했다면 어땠을까요 ?
int[3] x;  
int[3] *p = &x;
*/
