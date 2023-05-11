#include "counter.h"

// sum1 �� ��� ȣ�� : sum1(5) ��� ����

// return 5 + sum1(4)
//			  return 4 + sum1(3)
//						 return 3 + sum1(2)
//									return 2 + sum1(1)
// 											   return 1;											  
// �Լ� ȣ���� ����ǰ� ȣ���� ������ ���ư����� "�߰��� �۾��� �����ؾ��մϴ�."
// => ��, �ݵ�� ���ư��� �մϴ�.
// => �����Ϸ��� return address �������� ����ȭ �Ҽ� �����ϴ�.
int sum1(int n)
{
	if (n == 1) return 1;
	return n + sum1(n - 1);
}

// sum2(5)
// return sumTail(5, 1)
//		  return sumTail(4, 6)	
//		         return sumTail(3, 10)
//						return sumTail(2, 13)
//							   return sumTail(1, 15)
//									  return 15

// �ٽ� 
// => ��� ȣ���� �Լ��� �������� �ֽ��ϴ�.
// => �Լ� ȣ���� ����ǰ� ���ư����� ���̻� �ϴ� ���� �����ϴ�.
// => �̰�� ��� �Լ��� ���ļ� ���ư��ʿ�� �����ϴ�.
// => �ѹ��� ó������ �̵��մϴ�.
// => �ᱹ, ,�Լ� ȣ��� ���� �Լ��� ������ �����ϰ� �˴ϴ�.


int sumTail(int n, int result)
{
	if (n == 1) return result;
	return sumTail(n - 1, result + n);
}

int sum2(int n)
{
	return sumTail(n, 1);
}

int main()
{
	int cnt = 110000;

	int ret1 = sum1(cnt);
	//int ret1 = sum2(cnt);

	printf("%d\n", ret1);
}