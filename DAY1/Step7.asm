; step 7. C 함수 호출하기

segment .text
	global _asm_main 

	extern _add		; 다른 파일에 있는 함수라고 알려주는것
					; C언어의 선언의 의미

_asm_main:
	push	ebp
	mov		ebp, esp

	; add(1,2) 를 만들어 보세요
	push	2
	push	1
	call	_add
	add		esp, 8

	; 반환값은 eax에 있는데.. 그냥 두면 다시 
	; _asm_main의 반환값이 됩니다. 

	mov		esp, ebp
	pop		ebp
	ret

	

