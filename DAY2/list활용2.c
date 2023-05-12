#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

// 핵심 
// => NODE 안에 데이타를 보관하지 말고!!
// => 데이타 안에 NODE를 보관하자.

typedef struct _People
{
	char name[12];
	int  age;

	NODE vipList;
} People;

// list 의 모든 요소를 화면 출력
void showVipList(NODE* head)
{
	NODE* current = 0;
	People* p = 0;

	int dx = 0;

	for (current = head->next; current != head;
		current = current->next)
	{
		
		dx = offsetof(People, vipList);

		p = (People*)((char*)current - dx);
		
		printf("%s(%d)\n", p->name, p->age);
	}
}
// list0에서 offset_of 복사해서 이소스 위에 붙여 넣기하세요







int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	init_list(head);



	int age = 0;
	char name[12];
	People* people;

	while (1)
	{
		printf("나이를 먼저 입력하세요 >> ");
		scanf_s("%d", &age);

		if (age == -1) break;

		printf("이름을 입력하세요 >> ");
		scanf_s("%s", name, 12);

		people = (People*)malloc(sizeof(People));

		strcpy_s(people->name, 11, name);

		people->age = age;

		insert_front(&(people->vipList), head);
	}

	showVipList(head);
}




