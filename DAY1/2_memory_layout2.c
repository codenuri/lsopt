#include <stdio.h>
#include <stdlib.h>

int  g1 = 0x11223344; 
            // intel CPU ����Ÿ�� 1����Ʈ ������ �Ųٷ� ����
            // 44 33 22 11
char g2[] = "abcdefg";
              // => 4����Ʈ���� ����Ÿ�� �ƴ�
                //  1����Ʈ�� �迭.. 


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

// �̼ҽ� ������ ������
// x86

// tools.zip ���� Ǯ��
// PEView.zip ���� Ǫ����..

// PEView �����ϼ���
