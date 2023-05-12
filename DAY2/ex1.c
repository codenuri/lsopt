#include <stdio.h>

int main()
{
	// 1. 사용자에게 숫자를 한개를 입력 받고 싶다!
	// => 정수형 변수 한개가 필요 하다.
	int n = 0;
	scanf_s("%d", &n);


	// 2. 사용자에게 숫자를 2개를 입력 받고 싶다!
	int n1 = 0;
	int n2 = 0;
	scanf_s("%d", &n1);
	scanf_s("%d", &n2);



	// 3. 사용자에게 숫자를 5개 입력 받고 싶다.
	int a, b, c, d, e;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	scanf_s("%d", &e);



	// 4. 반복문을 사용할수 없을까 ?
	// => 5개의 변수가 동일한 이름을 사용해야 한다.
	// 배열 : 여러개 변수를 하나의 이름 과 인덱스로 사용하기 위한 도구..
	int arr[5];
	
	for ( int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
}