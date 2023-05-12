// list.h
#pragma once

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