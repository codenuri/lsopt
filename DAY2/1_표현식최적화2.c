#include <stdio.h>

// ����� ���� �����ڸ� ����϶�.
int main()
{
	int i = 3;

	// % ������ ���� ��Ʈ �����ڰ� ������.
//	if (i % 2 == 1) // bad
	if (i & 1)	    // good
	{ 
		printf("%d �� Ȧ�� �Դϴ� \n", i); 
	} 


	int i = 352;

	// �������� ���� ������. 
	// SHIFT �� ���� ������.
	int ret1 = i / 32; // bad
	int ret2 = i >> 5; // good


	

}