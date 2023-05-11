int add(int a, int b) { return a + b; }


int n;				// n은 int 타입 변수
int arr[2];			// arr 은 int[2] 타입 변수
int(*p1)[2];		// p1은 int[2] 를 가리키는 포인터
int(*p2)(int, int);

int foo(int, int);

// typedef : 변수 위치의 심볼을 타입으로 만들어 달라.
typedef int n;				// n은 int 타입 별명
typedef int arr[2];			// arr 은 int[2] 타입 별명
typedef int(*p1)[2];		// p1은 int[2] 를 가리키는 포인터
typedef int(*p2)(int, int);
typedef int foo(int, int);

int main()
{
	arr a = { 1,2 };

	p2 p = &add;

//	foo f = &add; // error.. foo 는 함수주소가아닌
					// 타입입니다.
	foo* f = &add; // ok.. 함수 타입* 이므로
					// 함수 포인터 타입. 결국 p2와동일

//	foo goo; // 결국 이코드는 
//	int goo(int, int); // 입니다. 즉,함수의 선언부!!!
}


