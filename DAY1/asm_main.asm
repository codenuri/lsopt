; step 3. �Լ� ȣ���ϱ�.

segment .text
	global _asm_main 


_asm_main:

	; ���ƿ� �ּҸ� �������ͷ� �˷��ݴϴ�.
	; mov	ebx, AAA	; ���� �ڵ�� �ٲ�� AAA��ġ�� �ּҷκ���
	

	; ���ƿ� �ּҸ� ���ÿ� ��� �ݴϴ�
;	push	AAA
;	jmp		foo
;AAA:	
	
	call	foo		; call �� �ᱹ �� 3���Դϴ�.
					; �ٽ� "���ƿ� �ּ�" ������� ���û��

	ret

	
foo:
	; .....
	mov	eax, 30
	;pop	ebx		; ���ÿ��� ����⿡�� ������ ebx�� ��´� 
	;jmp	ebx  
	ret		; �� 2�ٰ� ����. 
			; �ٽ� ret�� ���ÿ��� ���ư� �ּҸ� ������ ���ư��ϴ�.
	

