//00_false_sharing1
#include "counter.h"
#include <thread>  // 스레드를 만들기 위해 "C++ 헤더" 사용

const int sz = 10000000;

long long n1 = 0;
long long n2 = 0;


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
	CHECK(START);
	single_thread();
	CHECK(LAB);
	multi_thread();
	CHECK(END);
}
