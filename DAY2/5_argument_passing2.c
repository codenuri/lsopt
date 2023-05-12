
// 인자로 전달된 정수형 변수를 읽기만 하는 경우.

void f1(int n)
{
	int a = n;
}

void f2(const int* p)
{
	int a = *p;
}

int main()
{
	int x = 10;
	f1(x);
	f2(&x);
}

// C++ 사용자
void f1(int n)
{
	int a = n;
}

// C++의 reference 는 기계어 코드에서는 포인터 일 뿐입니다.
// 아래 코드는 나쁜 코드 입니다. 위가 좋습니다.
void f2(const int& r)
{
	int a = r;
}