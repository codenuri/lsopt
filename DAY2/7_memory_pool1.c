#include <stdio.h>
#include <stdlib.h>

typedef struct _bullet
{
	int x;
	int y;
} bullet;
 

int main()
{
	bullet* p1 = (bullet*)malloc(sizeof(bullet)); // ȭ�鿡 �Ѿ˵���
	bullet* p2 = (bullet*)malloc(sizeof(bullet));

	free(p1); // ȭ�鿡�� �Ѿ��� �������.

	bullet* p3 = (bullet*)malloc(sizeof(bullet));

	free(p2);
	free(p3);

	// ���鰳�� �Ѿ��� "�޸� �Ҵ�/����" �� �ݺ��ϸ� �ʹ� ������尡 Ů�ϴ�.
}