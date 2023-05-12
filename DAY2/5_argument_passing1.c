// call by value vs call by pointer

struct big
{
	int arr[1000];
	char str[1000];
};

// ���纻�� ���� ������尡 �ִ�
void bad(struct big arg)	
{
}

// ���纻�� �������� �����Ƿ� ������尡 ����.
void good(const struct big* arg)
{
}

int main()
{
	struct big b = { 0 };

	bad(b);
}

