#include <stdio.h>
#include <stdlib.h>

int main()
{
	// malloc(크기)
	// => 인자로 전달한 크기 만큼의 메모리만 할당하는것
	// => 해당 메모리를 어떻게 사용할지는 반환된 주소를
	//    어떤 포인터에 담는가에 따라달라집니다.
	
	// void* => 다른 타입* 로 암시적변환
	// C언어 : ok
	// C++  : 명시적변환 필요
	int* p1 = (int*)malloc(48); // int[12] 처럼 사용하겠다
	p1[0] = 10;

	int(*p2)[2] = (int(*)[2])malloc(48); // int[6][2] 처럼 사용하겠다
	p2[0][0] = 10;

	int(*p3)[2][2] = (int(*)[2][2])malloc(48); // int[3][2][2] 처럼
	p3[0][0][0] = 10;

	free(p1);
	free(p2);
	free(p3);
}







