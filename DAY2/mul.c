
// 윈도우에서 DLL 만들때는 export 라는 키워를 적어야 합니다.
// 리눅스는 필요 없는 작업

__declspec(dllexport)
int mul(int a, int b)
{
	return a * b;
}

// cl mul.c /LD

// /LD => dll 로 빌드하는 옵션