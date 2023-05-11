segment .data

L1 DD	100		; Define DWORD 즉, 4바이트
				; 4바이트 L1 = 100, 단, L1은 100 이 담긴 메모리를 가리키는 주소
				; DB, DW....

segment .text
	global _asm_main 


_asm_main:
	mov     DWORD [L1], 200
	mov		eax, DWORD [L1]   ; L1 은 주소 [L1] 은 값(*L1의미)
	ret

; nasm 이 아닌 g++, vc 는 DWORD PTR[L1] 입니다.
