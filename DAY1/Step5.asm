; step 5. stack frame

segment .text
	global _asm_main 

_asm_main:
	
	push	20
	push	50
	call    foo	
	add		esp, 8

	ret

	
foo:
	; �Լ��� ���۵ɶ� ���������͸� ebp�� ����
	push	ebp
	mov		ebp, esp
	
	; � ������ ������ ����ߴ�
	; push	100

	mov		eax, DWORD [ebp+8]  
	add		eax, DWORD [ebp+12]	

	pop		ebp
	ret 




