; step 4. �Լ� ���� �����ϱ�.

segment .text
	global _asm_main 

_asm_main:
	
	; ��� 1. �������Ϳ� ����
	; ���� : ������
	; ���� : �������ʹ� ������ ���ѵǾ� �ִ�.
	; => 64��Ʈ C �����Ϸ��� ���. ���� 4�������� �������ͷ�..
	mov		edx,  20
	mov     ecx,  30
	call	foo		

	; ��� 2. ������ ����� ���� ����
	push	20
	push	50
	call    goo
	
	;add		esp, 8

	ret
	
goo:
	; ���ڸ� �������� ?
	; CPU�� esp �������Ͱ� ������ ����� ������ ����ŵ�ϴ�.
	mov		eax, DWORD [esp+4]  ; 1��° ���� 50
	add		eax, DWORD [esp+8]	; 2��° ���� 20

	;ret 
	ret		8	; esp�� 8��ŭ �ø��� ����..
				; ���� ���޿� ������ ȣ�� ������(callee) �ı�






foo:
	mov		eax, edx    ; eax = edx
	add		eax, ecx	; eax += edx
	ret		

