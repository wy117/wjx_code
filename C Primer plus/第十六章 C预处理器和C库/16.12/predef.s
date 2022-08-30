	.file	"predef.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "predef.c\0"
.LC1:
	.ascii "The file is %s.\12\0"
.LC2:
	.ascii "Jul 28 2022\0"
.LC3:
	.ascii "The date is %s.\12\0"
.LC4:
	.ascii "10:13:42\0"
.LC5:
	.ascii "The time is %s.\12\0"
.LC6:
	.ascii "The version is %ld.\12\0"
.LC7:
	.ascii "This is line %d.\12\0"
.LC8:
	.ascii "This function is %s\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	leaq	.LC2(%rip), %rdx
	leaq	.LC3(%rip), %rcx
	call	printf
	leaq	.LC4(%rip), %rdx
	leaq	.LC5(%rip), %rcx
	call	printf
	movl	$201710, %edx
	leaq	.LC6(%rip), %rcx
	call	printf
	movl	$12, %edx
	leaq	.LC7(%rip), %rcx
	call	printf
	leaq	__func__.3223(%rip), %rdx
	leaq	.LC8(%rip), %rcx
	call	printf
	call	why_me
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC9:
	.ascii "This is line %d\0"
	.text
	.globl	why_me
	.def	why_me;	.scl	2;	.type	32;	.endef
	.seh_proc	why_me
why_me:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	__func__.3226(%rip), %rdx
	leaq	.LC8(%rip), %rcx
	call	printf
	movl	$22, %edx
	leaq	.LC9(%rip), %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
__func__.3223:
	.ascii "main\0"
__func__.3226:
	.ascii "why_me\0"
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
