#include <stdio.h>

int asm_main();

int main()
{
	int ret = asm_main();

	printf("결과 : %d\n", ret);
}

// 명령줄 : nasm -f win32 -o asm_main.obj  asm_main.asm

// 출력   : asm_main.obj  


// nasm.us 에가시면 64bit 용, linux, osx 모두 있습니다.