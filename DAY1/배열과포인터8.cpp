// �迭��������8.cpp
#include <stdio.h>
//void foo(int* p) // �Ϲ����� ���. ����
void foo(int p[3]) // �̷��� �ص� �Ǵµ�...p�� �迭 �ƴմϴ�.������
{
	printf("%d\n", sizeof(p)); // 4
}

int main()
{
	int x[3] = { 1,2,3 };

	int* p = x;

	foo(x);

	// �Ʒ� �ڵ� ��� ������ ������
//	printf("%d\n", sizeof(x) ); // int * 3 ��, 12
//	printf("%d\n", sizeof(p) ); // 32bit 4, 
}