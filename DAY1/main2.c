#include <stdio.h>

int asm_main();

int main()
{
	int ret = asm_main();

	printf("��� : %d\n", ret);
}

int add(int a, int b)
{
	printf("called add : %d, %d\n", a, b);

	return a + b;
}





// ����� : nasm -f win32 -o asm_main.obj  asm_main.asm

// ���   : asm_main.obj  


// nasm.us �����ø� 64bit ��, linux, osx ��� �ֽ��ϴ�.