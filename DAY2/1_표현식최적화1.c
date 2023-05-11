// github.com/codenuri/lsopt  

// 에서 DAY2.zip 받으시면 됩니다.


// 93 page ~

int main()
{
	int day = 30;
	int a = 0, b = 0, c = 0, d = 0, x = 0;

	// 1. 상수를 모아라.
	// => 상수에 대한 연산은 컴파일 시간에 수행 됩니다.
//	int cnt1 = 60 * day * 24 * 31; // bad
	int cnt1 = day * 60 * 24 * 31; // good


	// 2. 표현식을 단순하게.
	// ax^3 + bx^2 + cx + d
	int y1 = a * x * x * x + b * x * x + c * x + d; //6번곱하기 3번 더하기 
	int y2 = (((a * x + b) * x + c) * x + d);		//3번곱하기 3번 더하기	


	// 3. increment 
	int n1 = ++a;	// 1. a를 1증가
					// 2. return a

	int n2 = b++;	// 1. temp = b
					// 2. b를 증가
					// 3. return temp
	// 단순히 1증가 목적
	++a; // good
	a++; // bad

//	for (int i = 0; i < 10; i++ ) // bad
	for (int i = 0; i < 10; ++i) // good
	{						
	}
	// 단, 요즘 컴파일러는 위 2개의 기계어 코드는 동일합니다.
	// i 가 int 라면 어떤 코드도 상관없습니다.

	// 그런데, C++ STL 사용하시는 분은
	// iterator 는 전위형이 빠릅니다.
}

