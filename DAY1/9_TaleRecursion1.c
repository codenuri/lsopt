#include "counter.h"

// 재귀 호출
// => 특정한 문제를 해결할때 알고리즘을 쉽게 작성 가능
// => ex. tree 의 순회

// 단점 1. 느리다.
//     2. 호출이 깊어지면 stack overflow 발생.

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