#include <stdio.h>

// ���ڿ� �迭 vs ���ڿ� ������ - 10page

int main(void)
{
    char s1[] = "Hello"; // ���ڿ� �迭. ���ڿ� ��ü�� ���ÿ� 
//  char* s2 = "Hello";  // ���ڿ� ������. �����͸� ���ÿ�  
                        // => ��� �޸𸮸� ������ �����ͷ� ???
                        // C��� : ���
                        // C++   : ����

    const char* s2 = "Hello"; // C++�� �̷��� �ؾ߸� ����

    *s1 = 'A'; // ok. ������ R/W ����
//  *s2 = 'A'; // runtime error. s2�� ����Ű�� ���� ��� �޸�
                // s2��  const char* ��� ������ ����.            

    printf("continue main\n");

    // �Ʒ� �ڵ� ������ ������
    const char sa1[] = "abcd";
    const char sa2[] = "abcd";
    const char *sp1 = "abcd";
    const char *sp2 = "abcd";

    // �ּҸ� ������ ������!
    printf("%p\n", sa1);
    printf("%p\n", sa2);
    printf("%p\n", sp1);
    printf("%p\n", sp2);
}



