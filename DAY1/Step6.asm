; step 6. �������� �����

segment .text
	global _asm_main 

_asm_main:
	
	push	20
	push	50
	call    foo	
	add		esp, 8

	ret

	
foo:
	; �Ʒ� 3���� �Լ��� "prolog" �Դϴ�.
	push	ebp
	mov		ebp, esp

	; �������� �����
	; int x, y �� �ǹ�
	sub		esp, 8

	; ���������� �� �ֱ�
	mov		DWORD [ebp-4], 10
	mov		DWORD [ebp-8], 20

	mov		eax, DWORD [ebp+8]  
	add		eax, DWORD [ebp+12]	

	; �Ʒ� 3���� �Լ��� epilog �Դϴ�.
	;add		esp, 8	; bad
	mov		esp, ebp	; good
	pop		ebp
	ret 




