// call by value vs call by pointer

struct big
{
	int arr[1000];
	char str[1000];
};

// 복사본에 대한 오버헤드가 있다
void bad(struct big arg)	
{
}

// 복사본이 생성되지 않으므로 오버헤드가 적다.
void good(const struct big* arg)
{
}

int main()
{
	struct big b = { 0 };

	bad(b);
}

