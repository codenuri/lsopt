// github.com/codenuri/lsopt  

// ���� DAY2.zip �����ø� �˴ϴ�.


// 93 page ~

int main()
{
	int day = 30;
	int a = 0, b = 0, c = 0, d = 0, x = 0;

	// 1. ����� ��ƶ�.
	// => ����� ���� ������ ������ �ð��� ���� �˴ϴ�.
//	int cnt1 = 60 * day * 24 * 31; // bad
	int cnt1 = day * 60 * 24 * 31; // good


	// 2. ǥ������ �ܼ��ϰ�.
	// ax^3 + bx^2 + cx + d
	int y1 = a * x * x * x + b * x * x + c * x + d; //6�����ϱ� 3�� ���ϱ� 
	int y2 = (((a * x + b) * x + c) * x + d);		//3�����ϱ� 3�� ���ϱ�	


	// 3. increment 
	int n1 = ++a;	// 1. a�� 1����
					// 2. return a

	int n2 = b++;	// 1. temp = b
					// 2. b�� ����
					// 3. return temp
	// �ܼ��� 1���� ����
	++a; // good
	a++; // bad

//	for (int i = 0; i < 10; i++ ) // bad
	for (int i = 0; i < 10; ++i) // good
	{						
	}
	// ��, ���� �����Ϸ��� �� 2���� ���� �ڵ�� �����մϴ�.
	// i �� int ��� � �ڵ嵵 ��������ϴ�.

	// �׷���, C++ STL ����Ͻô� ����
	// iterator �� �������� �����ϴ�.
}

