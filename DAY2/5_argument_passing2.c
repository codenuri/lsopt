
// ���ڷ� ���޵� ������ ������ �б⸸ �ϴ� ���.

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

// C++ �����
void f1(int n)
{
	int a = n;
}

// C++�� reference �� ���� �ڵ忡���� ������ �� ���Դϴ�.
// �Ʒ� �ڵ�� ���� �ڵ� �Դϴ�. ���� �����ϴ�.
void f2(const int& r)
{
	int a = r;
}