segment .data

L1 DD	100		; Define DWORD ��, 4����Ʈ
				; 4����Ʈ L1 = 100, ��, L1�� 100 �� ��� �޸𸮸� ����Ű�� �ּ�
				; DB, DW....

segment .text
	global _asm_main 


_asm_main:
	mov     DWORD [L1], 200
	mov		eax, DWORD [L1]   ; L1 �� �ּ� [L1] �� ��(*L1�ǹ�)
	ret

; nasm �� �ƴ� g++, vc �� DWORD PTR[L1] �Դϴ�.
