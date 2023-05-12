#include <stdio.h>

// 사전 지식
typedef struct _point
{
	int x;
	int y;
} POINT;

int main()
{
	POINT* p = 0;

//	p->x = 10; // runtime error

	// p = 0 일때.. 위처럼 멤버 접근은 runtime 오류입니다.
	// 그런데.. 멤버의 주소를 출력하면 어떻게 될까요 ?
	printf("%d\n", &(p->x)); // 0
	printf("%d\n", &(p->y)); // 4
							 // POINT 구조체 안에
							// y가 얼마나 떨어진 위치에 있는가?

#define offset_of(TYPE, MEMBER)	\
	(int)&(((TYPE*)0)->MEMBER)

	// offset_of : 구조체 안에서 해당 멤버의 위치(offset)
	//			   을 바이트 단위로 구하는 기술
	int n = offset_of(POINT, y);

	printf("%d\n", n);
}