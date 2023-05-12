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

int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	init_list(head);



	int age = 0;
	char name[12];
	People *people;

	while ( 1 )
	{
		printf("나이를 먼저 입력하세요 >> ");
		scanf_s("%d", &age);

		if (age == -1) break;

		printf("이름을 입력하세요 >> ");
		scanf_s("%s", name, 12);

		// people 을 생성해서 입력된 데이타를 보관한다
		people = (People*)malloc(sizeof(People));

		strcpy_s(people->name, 11, name);

		people->age = age;
		  
		// 이제 people 을 list 에 보관해야합니다!!
		insert_front(&people->vipList, head);
	}
}




