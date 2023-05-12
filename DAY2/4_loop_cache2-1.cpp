//00_false_sharing1
#include "counter.h"
#include <thread>  // �����带 ����� ���� "C++ ���" ���

const int sz = 10000000;


// ���� �ٸ� CPU �� ���ؼ� ���Ǵ� ����������
// ���ӵ� �޸𸮿� ������ �ʵ���
//	ĳ�� ũ�� ��ŭ ���ϴ�.

// ��� 1. �߰��� ĳ�� ũ�� ��ŭ�� ���� �߰�
long long n1 = 0;
char padding[64];
long long n2 = 0;


void f1()
{
	// õ������ ������ �����ϸ� 1����
	for (int i = 0; i < sz; i++)
	{
		n1 += 1;
	}
}


void f2()
{
	// f1�� �Ϻ��� �����ѵ�, ����� n2�� ����ϴ�.
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
