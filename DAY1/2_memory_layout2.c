#include <stdio.h>
#include <stdlib.h>

int  g1 = 0x11223344; 
            // intel CPU 데이타를 1바이트 단위로 거꾸로 저장
            // 44 33 22 11
char g2[] = "abcdefg";
              // => 4바이트단위 데이타가 아닌
                //  1바이트의 배열.. 


void foo(void)
{
    static int sx = 0xAABBCCDD;
    int lx = 0x55667788;
    printf("hello world\n");

    g1 = 0;

    int* p = (int*)malloc(sizeof(int) * 10);
    free(p);
}

int main(void)
{
    foo();
}

// 이소스 빌드해 보세요
// x86

// tools.zip 압축 풀고
// PEView.zip 압축 푸세요..

// PEView 실행하세요
