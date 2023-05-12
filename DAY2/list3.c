#include <stdio.h>
#include <stdlib.h>

// list3.c
// => 우리의 목표는 저장하는 데이타는 일반화 하는것

// 1. 리스트 관련 모든 함수는 인자로 data 가 아닌 NODE*를인자로


typedef struct _node
{
	int data;
	struct _node* prev;
	struct _node* next;
} NODE;

// NODE* head = 0;

void init_list(NODE* head)
{
	head->next = head;
	head->prev = head;
}

void __insert_node(NODE* temp, NODE* prev, NODE* next)
{
	temp->prev = prev;
	temp->next = next;

	prev->next = temp;
	next->prev = temp;
}

void insert_front(NODE* node, NODE* head)
{
	__insert_node(node, head, head->next);

}
void insert_back(NODE* node, NODE* head)
{
	__insert_node(node, head->prev, head);
}

int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));

	init_list(head);

	for (int i = 0; i < 5; i++)
	{
		NODE* node = (NODE*)malloc(sizeof(NODE));
		node->data = i;
		insert_front(node, head);
	}
}