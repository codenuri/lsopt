#include <stdio.h>

// 문자열 배열 vs 문자열 포인터 - 10page

int main(void)
{
    char s1[] = "Hello"; // 문자열 배열. 문자열 자체가 스택에 
//  char* s2 = "Hello";  // 문자열 포인터. 포인터만 스택에  
                        // => 상수 메모리를 비상수를 포인터로 ???
                        // C언어 : 허용
                        // C++   : 에러

    const char* s2 = "Hello"; // C++은 이렇게 해야만 가능

    *s1 = 'A'; // ok. 스택은 R/W 가능
//  *s2 = 'A'; // runtime error. s2가 가리키는 곳은 상수 메모리
                // s2가  const char* 라면 컴파일 에러.            

    printf("continue main\n");

    // 아래 코드 생각해 보세요
    const char sa1[] = "abcd";
    const char sa2[] = "abcd";
    const char *sp1 = "abcd";
    const char *sp2 = "abcd";

    // 주소를 생각해 보세요!
    printf("%p\n", sa1);
    printf("%p\n", sa2);
    printf("%p\n", sp1);
    printf("%p\n", sp2);
}



