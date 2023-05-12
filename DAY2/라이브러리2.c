#include "mul.h"

// 정적 라이브러리 : 함수 기계어를 담은 라이브러리
// 타입 라이브러리 : DLL에 있는 함수의 링크 정보만 담은 파일
//				  윈도우에만 있는 개념

#pragma comment(lib, "mul.lib")
			// => 실행파일 만들때 .idata 섹션에
			// => mul.dll 정보를 넣어 달라
int main()
{
	mul(1, 2);
}