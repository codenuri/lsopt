
// �����쿡�� DLL ���鶧�� export ��� Ű���� ����� �մϴ�.
// �������� �ʿ� ���� �۾�

__declspec(dllexport)
int mul(int a, int b)
{
	return a * b;
}

// cl mul.c /LD

// /LD => dll �� �����ϴ� �ɼ�