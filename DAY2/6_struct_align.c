#include "counter.h"


// CPU 가 메모리에서 데이타를 읽을때
// 항상 주소는 "4 또는 8" 바이트 단위로 시작해야 합니다.

// 만약 구조체 padding이 없다면
// 1001번지에 있는 p.data 을 읽을때
// 1. 1000번지에서 4바이트 읽은후 
// 2. 1004번지에서 4바이트 읽은후
// 3. 1번에서 3바이트 + 2번에서 1바이트를 조합해서 사용

typedef struct _packet1
{
	char cmd;
	int data;
} PACKET1;

//PACKET1 p;
//int n = p.data;



#pragma pack(1)  // 멤버를 1byte로 align
typedef struct _packet2
{
	char cmd;
	int data;
} PACKET2;

int main()
{
	printf("%lld\n", sizeof(PACKET1)); // 8
	printf("%lld\n", sizeof(PACKET2)); // 5

	PACKET1 pack1 = { 0 };
	PACKET2 pack2 = { 0 };

	printf("%p\n", &pack1.data);
	printf("%p\n", &pack2.data);

}




