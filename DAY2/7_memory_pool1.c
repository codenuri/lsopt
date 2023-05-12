#include <stdio.h>
#include <stdlib.h>

typedef struct _bullet
{
	int x;
	int y;
} bullet;
 

int main()
{
	bullet* p1 = (bullet*)malloc(sizeof(bullet)); // 화면에 총알등장
	bullet* p2 = (bullet*)malloc(sizeof(bullet));

	free(p1); // 화면에서 총알이 사라졌다.

	bullet* p3 = (bullet*)malloc(sizeof(bullet));

	free(p2);
	free(p3);

	// 수백개의 총알을 "메모리 할당/해지" 를 반복하면 너무 오버헤드가 큽니다.
}