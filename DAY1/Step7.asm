; step 7. C �Լ� ȣ���ϱ�

segment .text
	global _asm_main 

	extern _add		; �ٸ� ���Ͽ� �ִ� �Լ���� �˷��ִ°�
					; C����� ������ �ǹ�

_asm_main:
	push	ebp
	mov		ebp, esp

	; add(1,2) �� ����� ������
	push	2
	push	1
	call	_add
	add		esp, 8

	; ��ȯ���� eax�� �ִµ�.. �׳� �θ� �ٽ� 
	; _asm_main�� ��ȯ���� �˴ϴ�. 

	mov		esp, ebp
	pop		ebp
	ret

	

