
// for vs while vs do~while

// do~while
// 1. 작업수행
// 2. 조건이 참이면 1로 이동
// 3. 반복문 탈출후 작업 계속


// for, while
// 1. 조건이 거짓 jmp 4 
// 2. 작업 수행
// 3. jmp 1
// 4. 반복문 탈출후 다음 작업
// 
// 위 처럼 만들수도 있지만 보통은 아래 처럼 합니다
// 1. jmp 3
// 2. 작업 수행
// 3. 조건을 만족하면 jmp 2
// 4. 반복문 탈출후 다음 작업



void f1()
{
	int n = 0;
	int i = 0;
	
	for (i = 0; i < 100; i++)
	{
		n = 0x11;
	}
}

void f2()
{
	int n = 0;
	int i = 0;

	while ( i < 100 )
	{
		n = 0x11;
		++i;
	}
}

void f3()
{
	int n = 0;
	int i = 0;

	do
	{
		n = 0x11;
		++i;
	}while (i < 100);
}


int main()
{
	f1 ();
	f2 ();
	f3();
}