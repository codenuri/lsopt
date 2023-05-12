#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
	int data;
	struct _node* prev;
	struct _node* next;
} NODE;

NODE* head = 0;

void init_list()
{
	head = (NODE*)malloc(sizeof(NODE));
	head->data = 0;

	head->next = head;
	head->prev = head;
}

// 2개의 노드 사이에 데이터를 보관하는 함수
void __insert_node(int data, NODE* prev, NODE* next)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;

	// 결국 그림을 그려서 생각하면 됩니다.
	// 1. 그림을 그리고
	// 2. 변경되야 하는 곳을 체크
	// 3. 순서가 중요(항상, 새로운것을 먼저 설정)

	temp->prev = prev;
	temp->next = next;

	prev->next = temp;
	next->prev = temp;
}
// list 에 앞에 삽입
void insert_front(int data)
{
	// 전방삽입은
	// "더미노드와 더미 노드->next 사이에 삽입)
	__insert_node(data, head, head->next);

}
void insert_back(int data)
{
	__insert_node(data, head->prev, head);
}

int main()
{
	init_list();

	insert_front(10);
	insert_front(20);
	insert_back(30);
	insert_back(40);

}