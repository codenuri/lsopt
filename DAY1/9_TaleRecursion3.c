#include "counter.h"

// sum1 의 재귀 호출 : sum1(5) 라고 가정

// return 5 + sum1(4)
//			  return 4 + sum1(3)
//						 return 3 + sum1(2)
//									return 2 + sum1(1)
// 											   return 1;											  
// 함수 호출이 종료되고 호출한 곳으로 돌아갔을때 "추가로 작업을 수행해야합니다."
// => 즉, 반드시 돌아가야 합니다.
// => 컴파일러가 return address 보관등을 최적화 할수 없습니다.
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

// 핵심 
// => 재귀 호출이 함수의 마지막에 있습니다.
// => 함수 호출이 종료되고 돌아갔을때 더이상 하는 일이 없습니다.
// => 이경우 모든 함수를 거쳐서 돌아갈필요는 없습니다.
// => 한번에 처음으로 이동합니다.
// => 결국, ,함수 호출시 이전 함수의 스택을 재사용하게 됩니다.


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