; step 6. 지역변수 만들기

segment .text
	global _asm_main 

_asm_main:
	
	push	20
	push	50
	call    foo	
	add		esp, 8

	ret

	
foo:
	; 아래 3줄이 함수의 "prolog" 입니다.
	push	ebp
	mov		ebp, esp

	; 지역변수 만들기
	; int x, y 의 의미
	sub		esp, 8

	; 지역변수에 값 넣기
	mov		DWORD [ebp-4], 10
	mov		DWORD [ebp-8], 20

	mov		eax, DWORD [ebp+8]  
	add		eax, DWORD [ebp+12]	

	; 아래 3줄이 함수의 epilog 입니다.
	;add		esp, 8	; bad
	mov		esp, ebp	; good
	pop		ebp
	ret 




