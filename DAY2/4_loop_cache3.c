// 성능 문제는 아닌데..
// 멀티스레드 해야 한다면 조심하세요
// cache 와 reorder
#include <atomic>
int a = 0;
int b = 0;

// thread A
void foo()
{
    a = b + 1;

    // 메모리 펜스
    // => 펜스 위에 있는 명령은 펜스아래로 내려갈수 없다.
    // => reordering 을 막기 위한 기술
    std::atomic_thread_fence(std::memory_order_seq_cst);

    b = 1;
}

// thread B
void goo()
{
    if (b == 1)
    {
        // a == 1 을 보장할수 있을까 ? <<== 핵심
    }
}





