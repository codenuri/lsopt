#include "counter.h"

// ��� ȣ��
// => Ư���� ������ �ذ��Ҷ� �˰����� ���� �ۼ� ����
// => ex. tree �� ��ȸ

// ���� 1. ������.
//     2. ȣ���� ������� stack overflow �߻�.

int sum1(int n)
{
	if (n == 1) return 1;
	return n + sum1(n - 1);
}

int main()
{
	int cnt = 4000;
//	int cnt = 5000;

	int ret1 = sum1(cnt);

	printf("%d\n", ret1);
}