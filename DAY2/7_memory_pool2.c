#include <stdio.h>
#include <stdlib.h>

typedef struct _bullet
{
	int x;
	union
	{
		// pool �� �������� ������ ����Ű�� �ּҷ�
		// ���ÿ��� y�� ���
		int y;
		struct _bullet* next;
	};
} bullet;

bullet* pool_head = 0;

void init_pool(unsigned int size)
{
	pool_head = (bullet*)malloc(sizeof(bullet) * size);

	// Ǯ�ȿ� �ִ� �� �Ѿ��� list ���·� ����
	for (int i = 0; i < size - 1; i++)
	{
		pool_head[i].next = &pool_head[i + 1];
	}
}

void destroy_pool()
{
	free(pool_head);
}

// pool ���� �Ѿ��� �ϳ� �Ҵ��ϴ� �Լ�
bullet* pool_alloc()
{
	bullet* temp = pool_head; // ��ȯ�� �޸� �ּ� ����

	pool_head = pool_head->next;

	return temp;
}

// ������ "���� �ݳ��� �Ѿ˸޸𸮸� pool�� ���"��
// => ������ �Ҵ�� "���� �ֱٿ� ����� ���� �ٽ� �Ҵ�"
void pool_free(bullet* p)
{
	p->next = pool_head;

	pool_head = p;
}

int main()
{
	init_pool(100);
		
	bullet* b1 = pool_alloc();
	bullet* b2 = pool_alloc();

	printf("b1 : %p\n", b1);
	printf("b2 : %p\n", b2);

	pool_free(b2);

	bullet* b3 = pool_alloc();
	printf("b3 : %p\n", b3); // �� ��� ����� ���� ������

	pool_free(b1);
	pool_free(b3);

}