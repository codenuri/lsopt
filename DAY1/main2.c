#include <stdio.h>

int asm_main();

int main()
{
	int ret = asm_main();

	printf("��� : %d\n", ret);
}

// ����� : nasm -f win32 -o asm_main.obj  asm_main.asm

// ���   : asm_main.obj  


// nasm.us �����ø� 64bit ��, linux, osx ��� �ֽ��ϴ�.