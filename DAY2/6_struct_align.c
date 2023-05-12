#include "counter.h"


// CPU �� �޸𸮿��� ����Ÿ�� ������
// �׻� �ּҴ� "4 �Ǵ� 8" ����Ʈ ������ �����ؾ� �մϴ�.

// ���� ����ü padding�� ���ٸ�
// 1001������ �ִ� p.data �� ������
// 1. 1000�������� 4����Ʈ ������ 
// 2. 1004�������� 4����Ʈ ������
// 3. 1������ 3����Ʈ + 2������ 1����Ʈ�� �����ؼ� ���

typedef struct _packet1
{
	char cmd;
	int data;
} PACKET1;

//PACKET1 p;
//int n = p.data;



#pragma pack(1)  // ����� 1byte�� align
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




