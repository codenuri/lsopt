// Release, x86 으로 놓고 컴파일 하세요
// 탐색기에서 실행파일 찾아서 크기 확인해 보세요
// "DAY1/Release/DAY1.exe" - 9k

#include <stdio.h>

// PE
int x[10000] = { 1,2,3 };  // 이 경우와	
//int x[10000]; // 이 경우의 크기를 비교해 보세요

int main()
{
	x[0] = 10;
}

// 11 page