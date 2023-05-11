#include "counter.h"

// 64bit, release 로 하세요

int sum1(int n)
{
	if (n == 1) return 1;
	return n + sum1(n - 1);
}

int sumTail(int n, int result)
{
	if (n == 1) return result;
	return sumTail(n - 1, result + n);
				// sumTail(3999, 1 + 4000)
				// sumTail(3998, 1 + 4000 + 3999)
				// sumTail(3997, 1 + 4000 + 3999 + 3998)
}

int sum2(int n)
{
	return sumTail(n, 1);
}

int main()
{
//	int cnt = 4000;
	int cnt = 110000;

	int ret1 = sum1(cnt);

	//int ret1 = sum2(cnt);

	printf("%d\n", ret1);
}