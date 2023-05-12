// ���� ������ �ƴѵ�..
// ��Ƽ������ �ؾ� �Ѵٸ� �����ϼ���
// cache �� reorder
#include <atomic>
int a = 0;
int b = 0;

// thread A
void foo()
{
    a = b + 1;

    // �޸� �潺
    // => �潺 ���� �ִ� ����� �潺�Ʒ��� �������� ����.
    // => reordering �� ���� ���� ���
    std::atomic_thread_fence(std::memory_order_seq_cst);

    b = 1;
}

// thread B
void goo()
{
    if (b == 1)
    {
        // a == 1 �� �����Ҽ� ������ ? <<== �ٽ�
    }
}





