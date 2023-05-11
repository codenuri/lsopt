; step 4. 함수 인자 전달하기.

segment .text
	global _asm_main 

_asm_main:
	
	; 방법 1. 레지스터에 전달
	; 장점 : 빠르다
	; 단점 : 레지스터는 갯수가 제한되어 있다.
	; => 64비트 C 컴파일러가 사용. 보통 4개까지만 레지스터로..
	mov		edx,  20
	mov     ecx,  30
	call	foo		

	; 방법 2. 스택을 사용한 인자 전달
	push	20
	push	50
	call    goo
	
	;add		esp, 8

	ret
	
goo:
	; 인자를 꺼내려면 ?
	; CPU의 esp 레지스터가 마지막 사용한 스택을 가리킵니다.
	mov		eax, DWORD [esp+4]  ; 1번째 인자 50
	add		eax, DWORD [esp+8]	; 2번째 인자 20

	;ret 
	ret		8	; esp를 8만큼 올리고 리턴..
				; 인자 전달용 스택을 호출 당한자(callee) 파괴






foo:
	mov		eax, edx    ; eax = edx
	add		eax, ecx	; eax += edx
	ret		

