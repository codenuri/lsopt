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
	; 함수가 시작될때 스택포인터를 ebp에 저장
	push	ebp
	mov		ebp, esp
	
	; 어떤 이유를 스택을 사용했다
	; push	100

	mov		eax, DWORD [ebp+8]  
	add		eax, DWORD [ebp+12]	

	pop		ebp
	ret 




