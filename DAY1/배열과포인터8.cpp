// 배열과포인터8.cpp
#include <stdio.h>
//void foo(int* p) // 일반적인 방법. 권장
void foo(int p[3]) // 이렇게 해도 되는데...p는 배열 아닙니다.포인터
{
	printf("%d\n", sizeof(p)); // 4
}

int main()
{
	int x[3] = { 1,2,3 };

	int* p = x;

	foo(x);

	// 아래 코드 결과 예측해 보세요
//	printf("%d\n", sizeof(x) ); // int * 3 즉, 12
//	printf("%d\n", sizeof(p) ); // 32bit 4, 
}