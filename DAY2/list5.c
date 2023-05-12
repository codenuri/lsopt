#include <stdio.h>
#include <stdlib.h>

// list5.c 
// => NODE 는 데이타를 보관할 필요 없다.
// => 단지, link 만 관리한다.

typedef struct _node
{
	struct _node* prev;
	struct _node* next;
} NODE;

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
		insert_front(node, head);
	}

}