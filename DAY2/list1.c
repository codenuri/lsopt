#include <stdio.h>

// 특징 1. 마지막 노드의 next의 head...
//        환형(circular) list
// 2. 데이타를 보관하지 않은 더미노드가 있으면 코드가 간결해 집니다.

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

	// 아래 처럼 하면 circular 가 아닙니다.
//	head->next = 0;
//	head->prev = 0;

	// 아래 코드가 circular 입니다
	head->next = head;
	head->prev = head;

}

int main()
{

}