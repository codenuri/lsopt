#include "counter.h"

#define SIZE 10000

int arr[SIZE][SIZE]; // 10000*10000 2���� �迭

void good()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			// ��� ��� ������ �޸� ������� ����
			// ������.
			// ĳ���� �ִ� ���� ��� ����� ���� ���!
			arr[i][j] = 0;
		}
	}
}

void bad()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			// �ٽ�. [i][j] �� �ƴ� [j][i]
			arr[j][i] = 0;
		}
	}
}
int main()
{
	good();
	bad();
}