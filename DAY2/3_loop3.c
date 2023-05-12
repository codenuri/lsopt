#include "counter.h"

// �ѹ��� ������ �ذ��ض�.
void bad()
{
    int cnt = 0;

    int n = 0b01110000111100001111000011110000;

    // 4����Ʈ �������� "1 �� ��Ʈ�� ����" �ľ� 
    // => ��, MSB �� 0 �̾�� �մϴ�.
    // 32���� ����
    while (n != 0)
    {
        if (n & 1) cnt++;
        n >>= 1;
    }
    printf("%d\n", cnt);
}

void good()
{
    int cnt = 0;

    int n = 0b01110000111100001111000011110000;

    // if �񱳴� ���� �����ϰ� 32�� �Դϴ�.
    // ������ �ݺ��� ��ü�� 8���� �����ϰ� �˴ϴ�.

    // �ٽ� : �ѹ��� �������� �ִ��� ���� ���� �϶�.
    while (n != 0)
    {
        if (n & 1) cnt++;
        if (n & 2) cnt++;
        if (n & 4) cnt++;
        if (n & 8) cnt++;
        n >>= 4;
    }
    printf("%d\n", cnt);
}


int main()
{
    CHECK(START);
    bad();
    CHECK(LAB);
    good();
    CHECK(END);
}
 