#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

// 사람은 다양한 여러 조직에 속해 있다.
// => 동호회, 회사, 동문회...

typedef struct _People
{
	char name[12];
	int  age;
	
	// 한사람은 2개이상의 리스트에 포함도 가능
	NODE vipList;
	NODE friendList;
} People;




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




