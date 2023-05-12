#include <stdio.h>
#include <stdlib.h>

typedef struct _bullet
{
	int x;
	union
	{
		// pool 에 있을때는 다음을 가리키는 주소로
		// 사용시에는 y로 사용
		int y;
		struct _bullet* next;
	};
} bullet;

bullet* pool_head = 0;

void init_pool(unsigned int size)
{
	pool_head = (bullet*)malloc(sizeof(bullet) * size);

	// 풀안에 있는 각 총알을 list 형태로 연결
	for (int i = 0; i < size - 1; i++)
	{
		pool_head[i].next = &pool_head[i + 1];
	}
}

void destroy_pool()
{
	free(pool_head);
}

// pool 에서 총알을 하나 할당하는 함수
bullet* pool_alloc()
{
	bullet* temp = pool_head; // 반환할 메모리 주소 보관

	pool_head = pool_head->next;

	return temp;
}

// 원리는 "지금 반납한 총알메모리를 pool의 헤드"로
// => 다음번 할당시 "가장 최근에 사용한 것을 다시 할당"
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
	printf("b3 : %p\n", b3); // 위 출력 결과와 비교해 보세요

	pool_free(b1);
	pool_free(b3);

}