// �Ʒ� �ڵ��� ����� �ڵ带 ������ ������
int add(int a, int b)	// push		ebp
{						// mov		ebp, esp
	int c = 0;			// sub		esp, 4
						// mov		DWORD[ebp-4], 0

	c = a + b;	// mov	eax, DWORD[ebp+8] 
				// add  eax, DWORD[ebp+12]
				// mov	DWORD[ebp-4], eax

	return c;	// mov	eax, DWORD[ebp-4]

				// mov	esp, ebp
				// pop	ebp
				// ret 
}



int main()
{
	int n = add(1, 2);  // push	 2
						// push  1
						// call _add ( add )
						// add	esp, 8
						// mov  n, eax
}
