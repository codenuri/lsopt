#include <stdio.h>
#include <stdlib.h>

int g = 10;

int main()
{
	static int s = 10;
	int n = 10;

	// 아래 코드의 결과로 나오는 주소들의 생각해 보세요.
	printf("main 주소      : %p\n", &main);
	printf("전역변수 주소   : %p\n", &g);
	printf("static지역 주소:%p\n", &s);
	printf("지역 주소      :%p\n", &n);

	int* p = (int*)malloc(4);
	printf("힙 할당 주소 : %p\n", p);

	free(p);
}
