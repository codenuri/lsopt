#include <stdio.h>

// 루프 안에서는 변수를 만들지 말라

void bad()
{
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num == -1) break;
	}
}
void good()
{
	int num = 0;
	
	while (1)
	{
		scanf_s("%d", &num);
		if (num == -1) break;
	}
}

int main()
{
	bad();
	good();
}