	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.intel_syntax noprefix
	.globl	_ft_strchr              ## -- Begin function ft_strchr
	.p2align	4, 0x90
_ft_strchr:                             ## @ft_strchr
	.cfi_startproc
## %bb.0:
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset rbp, -16
	mov	rbp, rsp
	.cfi_def_cfa_register rbp
	movsx	edx, byte ptr [rdi]
	movsx	eax, sil
	jmp	LBB0_1
	.p2align	4, 0x90
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	movsx	edx, byte ptr [rdi + 1]
	inc	rdi
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmp	eax, edx
	sete	cl
	test	edx, edx
	je	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	test	cl, 1
	je	LBB0_3
	jmp	LBB0_5
LBB0_4:
	xor	eax, eax
	test	cl, cl
	cmove	rdi, rax
LBB0_5:
	mov	rax, rdi
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
