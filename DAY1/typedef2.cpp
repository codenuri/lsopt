int add(int a, int b) { return a + b; }


int n;				// n�� int Ÿ�� ����
int arr[2];			// arr �� int[2] Ÿ�� ����
int(*p1)[2];		// p1�� int[2] �� ����Ű�� ������
int(*p2)(int, int);

int foo(int, int);

// typedef : ���� ��ġ�� �ɺ��� Ÿ������ ����� �޶�.
typedef int n;				// n�� int Ÿ�� ����
typedef int arr[2];			// arr �� int[2] Ÿ�� ����
typedef int(*p1)[2];		// p1�� int[2] �� ����Ű�� ������
typedef int(*p2)(int, int);
typedef int foo(int, int);

int main()
{
	arr a = { 1,2 };

	p2 p = &add;

//	foo f = &add; // error.. foo �� �Լ��ּҰ��ƴ�
					// Ÿ���Դϴ�.
	foo* f = &add; // ok.. �Լ� Ÿ��* �̹Ƿ�
					// �Լ� ������ Ÿ��. �ᱹ p2�͵���

//	foo goo; // �ᱹ ���ڵ�� 
//	int goo(int, int); // �Դϴ�. ��,�Լ��� �����!!!
}


