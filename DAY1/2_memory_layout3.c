#include <stdio.h>
#include <stdlib.h>

int g = 10;

int main()
{
	static int s = 10;
	int n = 10;

	// �Ʒ� �ڵ��� ����� ������ �ּҵ��� ������ ������.
	printf("main �ּ�      : %p\n", &main);
	printf("�������� �ּ�   : %p\n", &g);
	printf("static���� �ּ�:%p\n", &s);
	printf("���� �ּ�      :%p\n", &n);

	int* p = (int*)malloc(4);
	printf("�� �Ҵ� �ּ� : %p\n", p);

	free(p);
}
