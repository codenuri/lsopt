#include <stdio.h>
#include <stdlib.h>

// list4.c list 확인하는 함수 - display

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

void display(NODE* head)
{
	NODE* current = 0;

	for ( current = head->next; current != head;
		                        current = current->next)
	{
		printf("%d - ", current->data);
	}
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

	display(head);
}