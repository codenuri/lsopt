//00_false_sharing1
#include "counter.h"
#include <thread>  // 스레드를 만들기 위해 "C++ 헤더" 사용

const int sz = 10000000;


// 방법 2. 변수의 시작주소를 특정 크기 단위로 정렬

// _Alignas : C11 문법, vc가 지원안함
// alignas  : C++11 문법, VC, G++ 지원

//_Alignas(64) long long n1 = 0;
//_Alignas(64) long long n2 = 0;

alignas(64) long long n1 = 0;
alignas(64) long long n2 = 0;


void f1()
{
	// 천만번의 루프를 수행하면 1증가
	for (int i = 0; i < sz; i++)
	{
		n1 += 1;
	}
}


void f2()
{
	// f1과 완벽히 동일한데, 결과만 n2에 담습니다.
	for (int i = 0; i < sz; i++)
	{
		n2 += 1;
	}
}

void single_thread()
{
	f1();
	f2();
}

void multi_thread()
{
	std::thread t1(f1);
	std::thread t2(f2);
	t1.join();
	t2.join();
}

int main()
{
	printf("%p\n", &n1);
	printf("%p\n", &n2);

	CHECK(START);
	single_thread();
	CHECK(LAB);
	multi_thread();
	CHECK(END);
}
