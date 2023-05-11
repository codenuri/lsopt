; step 3. 함수 호출하기.

segment .text
	global _asm_main 


_asm_main:

	; 돌아올 주소를 레지스터로 알려줍니다.
	; mov	ebx, AAA	; 기계어 코드로 바뀌면 AAA위치의 주소로변경
	

	; 돌아올 주소를 스택에 담아 줍니다
;	push	AAA
;	jmp		foo
;AAA:	
	
	call	foo		; call 이 결국 위 3줄입니다.
					; 핵심 "돌아올 주소" 담기위해 스택사용

	ret

	
foo:
	; .....
	mov	eax, 30
	;pop	ebx		; 스택에서 꼭대기에서 꺼내서 ebx에 담는다 
	;jmp	ebx  
	ret		; 위 2줄과 동일. 
			; 핵심 ret는 스택에서 돌아갈 주소를 꺼내서 돌아갑니다.
	

