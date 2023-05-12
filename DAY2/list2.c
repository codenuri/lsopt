#include <stdio.h>

typedef struct _node
{
	int data;
	struct _node* prev;
	struct _node* next;
} NODE;

NODE* head = 0;

void init_node()
{
	head = (NODE*)malloc(sizeof(NODE));
	head->data = 0;

	head->next = head;
	head->prev = head;

}

int main()
{

}