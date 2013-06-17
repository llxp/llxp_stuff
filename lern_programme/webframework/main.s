	.file	"main.c"
# GNU C (Ubuntu/Linaro 4.6.3-1ubuntu5) version 4.6.3 (x86_64-linux-gnu)
#	compiled by GNU C version 4.6.3, GMP version 5.0.2, MPFR version 3.1.0-p3, MPC version 0.9
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# angegebene Optionen:  -fpreprocessed main.i -mtune=generic -march=x86-64
# -fverbose-asm -fstack-protector
# angeschaltete Optionen:  -fasynchronous-unwind-tables -fauto-inc-dec
# -fbranch-count-reg -fcommon -fdelete-null-pointer-checks -fdwarf2-cfi-asm
# -fearly-inlining -feliminate-unused-debug-types -ffunction-cse -fgcse-lm
# -fident -finline-functions-called-once -fira-share-save-slots
# -fira-share-spill-slots -fivopts -fkeep-static-consts
# -fleading-underscore -fmath-errno -fmerge-debug-strings
# -fmove-loop-invariants -fpeephole -fprefetch-loop-arrays
# -freg-struct-return -fsched-critical-path-heuristic
# -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
# -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
# -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fshow-column
# -fsigned-zeros -fsplit-ivs-in-unroller -fstack-protector
# -fstrict-volatile-bitfields -ftrapping-math -ftree-cselim -ftree-forwprop
# -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pta
# -ftree-reassoc -ftree-scev-cprop -ftree-slp-vectorize
# -ftree-vect-loop-version -funit-at-a-time -funwind-tables
# -fvect-cost-model -fverbose-asm -fzero-initialized-in-bss
# -m128bit-long-double -m64 -m80387 -maccumulate-outgoing-args
# -malign-stringops -mfancy-math-387 -mfp-ret-in-387 -mglibc -mieee-fp
# -mmmx -mno-sse4 -mpush-args -mred-zone -msse -msse2 -mtls-direct-seg-refs

# Compiler executable checksum: 75e879ed14f91af504f4150eadeaa0e6

	.section	.rodata
.LC0:
	.string	""
	.text
	.globl	parse_content
	.type	parse_content, @function
parse_content:
.LFB0:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$96, %rsp	#,
	movq	%rdi, -56(%rbp)	# content, content
	movq	%rsi, -64(%rbp)	# gap_allocate, gap_allocate
	movq	%rdx, -72(%rbp)	# gap_gap, gap_gap
	movl	%ecx, -76(%rbp)	# switcher, switcher
	movq	-56(%rbp), %rax	# content, tmp92
	movq	$-1, -88(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp92, tmp95
	movl	$0, %eax	#, tmp97
	movq	-88(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp95,
	repnz scasb
	movq	%rcx, %rax	#, tmp93
	notq	%rax	# tmp94
	subq	$1, %rax	#, D.3685
	movq	%rax, %rdi	# D.3685,
	call	malloc	#
	movq	%rax, -40(%rbp)	# tmp98, string_a
	movq	-56(%rbp), %rdx	# content, content.131
	movq	-40(%rbp), %rax	# string_a, tmp99
	movq	%rdx, %rsi	# content.131,
	movq	%rax, %rdi	# tmp99,
	call	strcpy	#
	movq	-56(%rbp), %rax	# content, tmp100
	movq	$-1, -88(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp100, tmp103
	movl	$0, %eax	#, tmp105
	movq	-88(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp103,
	repnz scasb
	movq	%rcx, %rax	#, tmp101
	notq	%rax	# tmp102
	subq	$1, %rax	#, D.3687
	movq	%rax, %rdi	# D.3687,
	call	malloc	#
	movq	%rax, -32(%rbp)	# tmp106, string_d
	movq	-40(%rbp), %rdx	# string_a, string_a.132
	movq	-32(%rbp), %rax	# string_d, tmp107
	movq	%rdx, %rsi	# string_a.132,
	movq	%rax, %rdi	# tmp107,
	call	strcpy	#
	movl	$0, -4(%rbp)	#, parse_counter
	jmp	.L2	#
.L9:
	movq	-32(%rbp), %rax	# string_d, tmp108
	movq	$-1, -88(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp108, tmp111
	movl	$0, %eax	#, tmp113
	movq	-88(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp111,
	repnz scasb
	movq	%rcx, %rax	#, tmp109
	notq	%rax	# tmp110
	subq	$1, %rax	#, D.3689
	movq	%rax, %rdi	# D.3689,
	call	malloc	#
	movq	%rax, -24(%rbp)	# tmp114, string_b
	movq	-32(%rbp), %rax	# string_d, tmp115
	movq	$-1, -88(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp115, tmp118
	movl	$0, %eax	#, tmp120
	movq	-88(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp118,
	repnz scasb
	movq	%rcx, %rax	#, tmp116
	notq	%rax	# tmp117
	subq	$1, %rax	#, D.3690
	movq	%rax, %rdi	# D.3690,
	call	malloc	#
	movq	%rax, -16(%rbp)	# tmp121, string_c
	movq	-32(%rbp), %rdx	# string_d, string_d.133
	movq	-24(%rbp), %rax	# string_b, tmp122
	movq	%rdx, %rsi	# string_d.133,
	movq	%rax, %rdi	# tmp122,
	call	strcpy	#
	movq	-24(%rbp), %rdx	# string_b, tmp123
	movq	-64(%rbp), %rax	# gap_allocate, tmp124
	movq	%rdx, %rsi	# tmp123,
	movq	%rax, %rdi	# tmp124,
	call	cut_string	#
	movq	%rax, ausgabe_string(%rip)	# ausgabe_string.134, ausgabe_string
	cmpl	$0, -76(%rbp)	#, switcher
	jne	.L3	#,
	movq	ausgabe_string(%rip), %rcx	# ausgabe_string, ausgabe_string.135
	movl	-4(%rbp), %eax	# parse_counter, tmp125
	movslq	%eax, %rdx	# tmp125, D.3696
	movq	%rdx, %rax	# D.3696, tmp126
	salq	$2, %rax	#, tmp126
	addq	%rdx, %rax	# D.3696, tmp126
	leaq	0(,%rax,4), %rdx	#, tmp127
	addq	%rdx, %rax	# tmp127, tmp126
	salq	$4, %rax	#, tmp128
	addq	$_GET, %rax	#, D.3698
	movq	%rcx, %rsi	# ausgabe_string.135,
	movq	%rax, %rdi	# D.3698,
	call	strcpy	#
	jmp	.L4	#
.L3:
	movq	ausgabe_string(%rip), %rcx	# ausgabe_string, ausgabe_string.136
	movl	-4(%rbp), %eax	# parse_counter, tmp129
	movslq	%eax, %rdx	# tmp129, D.3701
	movq	%rdx, %rax	# D.3701, tmp130
	salq	$2, %rax	#, tmp130
	addq	%rdx, %rax	# D.3701, tmp130
	leaq	0(,%rax,4), %rdx	#, tmp131
	addq	%rdx, %rax	# tmp131, tmp130
	salq	$4, %rax	#, tmp132
	addq	$_POST, %rax	#, D.3703
	movq	%rcx, %rsi	# ausgabe_string.136,
	movq	%rax, %rdi	# D.3703,
	call	strcpy	#
.L4:
	movq	-32(%rbp), %rdx	# string_d, string_d.137
	movq	-16(%rbp), %rax	# string_c, tmp133
	movq	%rdx, %rsi	# string_d.137,
	movq	%rax, %rdi	# tmp133,
	call	strcpy	#
	movq	ausgabe_string(%rip), %rax	# ausgabe_string, ausgabe_string.138
	movq	-16(%rbp), %rdx	# string_c, tmp134
	movl	$.LC0, %esi	#,
	movq	%rax, %rdi	# ausgabe_string.138,
	call	stringReplace	#
	movq	-16(%rbp), %rdx	# string_c, tmp135
	movq	-64(%rbp), %rax	# gap_allocate, tmp136
	movl	$.LC0, %esi	#,
	movq	%rax, %rdi	# tmp136,
	call	stringReplace	#
	movq	-16(%rbp), %rdx	# string_c, string_c.139
	movq	-32(%rbp), %rax	# string_d, tmp137
	movq	%rdx, %rsi	# string_c.139,
	movq	%rax, %rdi	# tmp137,
	call	strcpy	#
	movq	-16(%rbp), %rdx	# string_c, tmp138
	movq	-72(%rbp), %rax	# gap_gap, tmp139
	movq	%rdx, %rsi	# tmp138,
	movq	%rax, %rdi	# tmp139,
	call	cut_string	#
	movq	%rax, ausgabe_content(%rip)	# ausgabe_content.140, ausgabe_content
	movq	ausgabe_content(%rip), %rax	# ausgabe_content, ausgabe_content.141
	movq	-32(%rbp), %rdx	# string_d, tmp140
	movl	$.LC0, %esi	#,
	movq	%rax, %rdi	# ausgabe_content.141,
	call	stringReplace	#
	movq	-32(%rbp), %rdx	# string_d, tmp141
	movq	-72(%rbp), %rax	# gap_gap, tmp142
	movl	$.LC0, %esi	#,
	movq	%rax, %rdi	# tmp142,
	call	stringReplace	#
	cmpl	$0, -76(%rbp)	#, switcher
	jne	.L5	#,
	movq	ausgabe_content(%rip), %rcx	# ausgabe_content, ausgabe_content.142
	movl	-4(%rbp), %eax	# parse_counter, tmp143
	movslq	%eax, %rdx	# tmp143, D.3712
	movq	%rdx, %rax	# D.3712, tmp144
	salq	$2, %rax	#, tmp144
	addq	%rdx, %rax	# D.3712, tmp144
	leaq	0(,%rax,4), %rdx	#, tmp145
	addq	%rdx, %rax	# tmp145, tmp144
	salq	$4, %rax	#, tmp146
	addq	$20, %rax	#, D.3714
	addq	$_GET, %rax	#, D.3715
	movq	%rcx, %rsi	# ausgabe_content.142,
	movq	%rax, %rdi	# D.3715,
	call	strcpy	#
	jmp	.L6	#
.L5:
	movq	ausgabe_content(%rip), %rcx	# ausgabe_content, ausgabe_content.143
	movl	-4(%rbp), %eax	# parse_counter, tmp147
	movslq	%eax, %rdx	# tmp147, D.3718
	movq	%rdx, %rax	# D.3718, tmp148
	salq	$2, %rax	#, tmp148
	addq	%rdx, %rax	# D.3718, tmp148
	leaq	0(,%rax,4), %rdx	#, tmp149
	addq	%rdx, %rax	# tmp149, tmp148
	salq	$4, %rax	#, tmp150
	addq	$20, %rax	#, D.3720
	addq	$_POST, %rax	#, D.3721
	movq	%rcx, %rsi	# ausgabe_content.143,
	movq	%rax, %rdi	# D.3721,
	call	strcpy	#
.L6:
	cmpq	$0, -16(%rbp)	#, string_c
	je	.L7	#,
	movq	-16(%rbp), %rax	# string_c, tmp151
	movq	%rax, %rdi	# tmp151,
	call	free	#
.L7:
	cmpq	$0, -24(%rbp)	#, string_b
	je	.L8	#,
	movq	-24(%rbp), %rax	# string_b, tmp152
	movq	%rax, %rdi	# tmp152,
	call	free	#
.L8:
	addl	$1, -4(%rbp)	#, parse_counter
.L2:
	cmpl	$19, -4(%rbp)	#, parse_counter
	jle	.L9	#,
	cmpq	$0, -40(%rbp)	#, string_a
	je	.L10	#,
	movq	-40(%rbp), %rax	# string_a, tmp153
	movq	%rax, %rdi	# tmp153,
	call	free	#
.L10:
	cmpq	$0, -32(%rbp)	#, string_d
	je	.L11	#,
	movq	-32(%rbp), %rax	# string_d, tmp154
	movq	%rax, %rdi	# tmp154,
	call	free	#
.L11:
	movl	$0, %eax	#, D.3730
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	parse_content, .-parse_content
	.globl	hex2ascii
	.type	hex2ascii, @function
hex2ascii:
.LFB1:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	movq	%rdi, -40(%rbp)	# str, str
	movl	$0, -24(%rbp)	#, x
	movl	$0, -20(%rbp)	#, y
	jmp	.L13	#
	.cfi_offset 3, -24
.L16:
	movl	-24(%rbp), %eax	# x, tmp83
	cltq
	addq	-40(%rbp), %rax	# str, D.3657
	movl	-20(%rbp), %edx	# y, tmp84
	movslq	%edx, %rdx	# tmp84, D.3658
	addq	-40(%rbp), %rdx	# str, D.3659
	movzbl	(%rdx), %edx	# *D.3659_13, D.3660
	movb	%dl, (%rax)	# D.3660, *D.3657_11
	movl	-24(%rbp), %eax	# x, tmp85
	cltq
	addq	-40(%rbp), %rax	# str, D.3662
	movzbl	(%rax), %eax	# *D.3662_16, D.3663
	cmpb	$37, %al	#, D.3663
	jne	.L14	#,
	movl	-24(%rbp), %eax	# x, tmp86
	cltq
	movq	%rax, %rbx	# D.3666, D.3667
	addq	-40(%rbp), %rbx	# str, D.3667
	movl	-20(%rbp), %eax	# y, tmp87
	cltq
	addq	$1, %rax	#, D.3669
	addq	-40(%rbp), %rax	# str, D.3670
	movq	%rax, %rdi	# D.3670,
	call	convert	#
	movb	%al, (%rbx)	# D.3671, *D.3667_19
	addl	$2, -20(%rbp)	#, y
	jmp	.L15	#
.L14:
	movl	-24(%rbp), %eax	# x, tmp88
	cltq
	addq	-40(%rbp), %rax	# str, D.3674
	movzbl	(%rax), %eax	# *D.3674_26, D.3675
	cmpb	$43, %al	#, D.3675
	jne	.L15	#,
	movl	-24(%rbp), %eax	# x, tmp89
	cltq
	addq	-40(%rbp), %rax	# str, D.3679
	movb	$32, (%rax)	#, *D.3679_29
.L15:
	addl	$1, -24(%rbp)	#, x
	addl	$1, -20(%rbp)	#, y
.L13:
	movl	-20(%rbp), %eax	# y, tmp90
	cltq
	addq	-40(%rbp), %rax	# str, D.3681
	movzbl	(%rax), %eax	# *D.3681_8, D.3682
	testb	%al, %al	# D.3682
	jne	.L16	#,
	movl	-24(%rbp), %eax	# x, tmp91
	cltq
	addq	-40(%rbp), %rax	# str, D.3684
	movb	$0, (%rax)	#, *D.3684_33
	addq	$40, %rsp	#,
	popq	%rbx	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	hex2ascii, .-hex2ascii
	.globl	convert
	.type	convert, @function
convert:
.LFB2:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)	# hex, hex
	movq	-24(%rbp), %rax	# hex, tmp84
	movzbl	(%rax), %eax	# *hex_3(D), D.3626
	cmpb	$64, %al	#, D.3626
	jle	.L18	#,
	movq	-24(%rbp), %rax	# hex, tmp85
	movzbl	(%rax), %eax	# *hex_3(D), D.3629
	andl	$-33, %eax	#, D.3631
	subl	$55, %eax	#, D.3632
	jmp	.L19	#
.L18:
	movq	-24(%rbp), %rax	# hex, tmp86
	movzbl	(%rax), %eax	# *hex_3(D), D.3634
	subl	$48, %eax	#, D.3636
.L19:
	movb	%al, -1(%rbp)	# iftmp.128, ascii
	movsbl	-1(%rbp), %eax	# ascii, D.3637
	sall	$4, %eax	#, D.3638
	movb	%al, -1(%rbp)	# D.3638, ascii
	movq	-24(%rbp), %rax	# hex, tmp87
	addq	$1, %rax	#, D.3640
	movzbl	(%rax), %eax	# *D.3640_18, D.3641
	cmpb	$64, %al	#, D.3641
	jle	.L20	#,
	movq	-24(%rbp), %rax	# hex, tmp88
	addq	$1, %rax	#, D.3644
	movzbl	(%rax), %eax	# *D.3644_20, D.3645
	andl	$-33, %eax	#, D.3647
	subl	$55, %eax	#, iftmp.129
	jmp	.L21	#
.L20:
	movq	-24(%rbp), %rax	# hex, tmp89
	addq	$1, %rax	#, D.3649
	movzbl	(%rax), %eax	# *D.3649_25, D.3650
	subl	$48, %eax	#, iftmp.129
.L21:
	movzbl	-1(%rbp), %edx	# ascii, ascii.130
	addl	%edx, %eax	# ascii.130, D.3653
	movb	%al, -1(%rbp)	# D.3653, ascii
	movzbl	-1(%rbp), %eax	# ascii, D.3654
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	convert, .-convert
	.globl	cut_string
	.type	cut_string, @function
cut_string:
.LFB3:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# search_c, search_c
	movq	%rsi, -32(%rbp)	# string_content, string_content
	movq	-24(%rbp), %rdx	# search_c, tmp64
	movq	-32(%rbp), %rax	# string_content, tmp65
	movq	%rdx, %rsi	# tmp64,
	movq	%rax, %rdi	# tmp65,
	call	strstr	#
	movq	%rax, -16(%rbp)	# tmp66, searchStart_c
	cmpq	$0, -16(%rbp)	#, searchStart_c
	jne	.L23	#,
	movq	-32(%rbp), %rax	# string_content, D.3620
	jmp	.L24	#
.L23:
	movq	-24(%rbp), %rdx	# search_c, tmp67
	movq	-32(%rbp), %rax	# string_content, tmp68
	movq	%rdx, %rsi	# tmp67,
	movq	%rax, %rdi	# tmp68,
	call	strcspn	#
	movl	%eax, -4(%rbp)	# D.3621, string_find
	movl	-4(%rbp), %eax	# string_find, tmp69
	cltq
	addq	-32(%rbp), %rax	# string_content, D.3623
	movb	$0, (%rax)	#, *D.3623_9
	movq	-32(%rbp), %rax	# string_content, D.3620
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	cut_string, .-cut_string
	.globl	stringReplace
	.type	stringReplace, @function
stringReplace:
.LFB4:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$64, %rsp	#,
	movq	%rdi, -40(%rbp)	# search, search
	movq	%rsi, -48(%rbp)	# replace, replace
	movq	%rdx, -56(%rbp)	# string, string
	movl	$0, -4(%rbp)	#, len
	movq	-40(%rbp), %rdx	# search, tmp76
	movq	-56(%rbp), %rax	# string, tmp77
	movq	%rdx, %rsi	# tmp76,
	movq	%rax, %rdi	# tmp77,
	call	strstr	#
	movq	%rax, -24(%rbp)	# tmp78, searchStart
	cmpq	$0, -24(%rbp)	#, searchStart
	jne	.L26	#,
	movq	-56(%rbp), %rax	# string, D.3599
	jmp	.L27	#
.L26:
	movq	-56(%rbp), %rax	# string, tmp79
	movq	$-1, -64(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp79, tmp82
	movl	$0, %eax	#, tmp84
	movq	-64(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp82,
	repnz scasb
	movq	%rcx, %rax	#, tmp80
	notq	%rax	# tmp81
	subq	$1, %rax	#, D.3600
	movq	%rax, %rdi	# D.3600,
	call	malloc	#
	movq	%rax, -16(%rbp)	# tmp85, tempString
	cmpq	$0, -16(%rbp)	#, tempString
	jne	.L28	#,
	movl	$0, %eax	#, D.3599
	jmp	.L27	#
.L28:
	movq	-56(%rbp), %rdx	# string, string.122
	movq	-16(%rbp), %rax	# tempString, tmp86
	movq	%rdx, %rsi	# string.122,
	movq	%rax, %rdi	# tmp86,
	call	strcpy	#
	movq	-24(%rbp), %rdx	# searchStart, searchStart.123
	movq	-56(%rbp), %rax	# string, string.124
	movq	%rdx, %rcx	# searchStart.123,
	subq	%rax, %rcx	# string.124,
	movq	%rcx, %rax	#, D.3606
	movl	%eax, -4(%rbp)	# D.3606, len
	movl	-4(%rbp), %eax	# len, tmp87
	cltq
	addq	-56(%rbp), %rax	# string, D.3608
	movb	$0, (%rax)	#, *D.3608_16
	movq	-48(%rbp), %rdx	# replace, replace.125
	movq	-56(%rbp), %rax	# string, tmp88
	movq	%rdx, %rsi	# replace.125,
	movq	%rax, %rdi	# tmp88,
	call	strcat	#
	movq	-40(%rbp), %rax	# search, tmp89
	movq	$-1, -64(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp89, tmp92
	movl	$0, %eax	#, tmp94
	movq	-64(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp92,
	repnz scasb
	movq	%rcx, %rax	#, tmp90
	notq	%rax	# tmp91
	subq	$1, %rax	#, D.3610
	movl	%eax, %edx	# D.3610, D.3611
	movl	-4(%rbp), %eax	# len, len.126
	addl	%edx, %eax	# D.3611, D.3613
	movl	%eax, -4(%rbp)	# D.3613, len
	movq	-16(%rbp), %rdx	# tempString, tempString.127
	movl	-4(%rbp), %eax	# len, tmp95
	cltq
	addq	%rax, %rdx	# D.3615, D.3616
	movq	-56(%rbp), %rax	# string, tmp96
	movq	%rdx, %rsi	# D.3616,
	movq	%rax, %rdi	# tmp96,
	call	strcat	#
	movq	-16(%rbp), %rax	# tempString, tmp97
	movq	%rax, %rdi	# tmp97,
	call	free	#
	movq	-56(%rbp), %rax	# string, D.3599
.L27:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	stringReplace, .-stringReplace
	.globl	Strdup
	.type	Strdup, @function
Strdup:
.LFB5:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# str, str
	cmpq	$0, -24(%rbp)	#, str
	jne	.L30	#,
	movl	$0, %eax	#, D.3591
	jmp	.L31	#
.L30:
	movq	-24(%rbp), %rax	# str, tmp63
	movq	$-1, -32(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp63, tmp66
	movl	$0, %eax	#, tmp68
	movq	-32(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp66,
	repnz scasb
	movq	%rcx, %rax	#, tmp64
	notq	%rax	# tmp65
	subq	$1, %rax	#, D.3592
	addq	$1, %rax	#, D.3593
	movq	%rax, %rdi	# D.3593,
	call	malloc	#
	movq	%rax, -8(%rbp)	# tmp69, p
	cmpq	$0, -8(%rbp)	#, p
	jne	.L32	#,
	movl	$0, %eax	#, D.3591
	jmp	.L31	#
.L32:
	movq	-24(%rbp), %rdx	# str, tmp70
	movq	-8(%rbp), %rax	# p, tmp71
	movq	%rdx, %rsi	# tmp70,
	movq	%rax, %rdi	# tmp71,
	call	strcpy	#
	movq	-8(%rbp), %rax	# p, D.3591
.L31:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	Strdup, .-Strdup
	.globl	kill_the_nulls
	.type	kill_the_nulls, @function
kill_the_nulls:
.LFB6:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# s, s
	jmp	.L34	#
.L36:
	addq	$1, -8(%rbp)	#, s
.L34:
	movq	-8(%rbp), %rax	# s, tmp63
	movzbl	(%rax), %eax	# *s_1, D.3584
	testb	%al, %al	# D.3584
	je	.L35	#,
	movq	-8(%rbp), %rax	# s, tmp64
	movzbl	(%rax), %eax	# *s_1, D.3586
	cmpb	$48, %al	#, D.3586
	je	.L36	#,
.L35:
	movq	-8(%rbp), %rax	# s, D.3587
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	kill_the_nulls, .-kill_the_nulls
	.globl	IntToChar
	.type	IntToChar, @function
IntToChar:
.LFB7:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# integer, integer
	movl	-4(%rbp), %eax	# integer, tmp63
	addl	$48, %eax	#, D.3582
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	IntToChar, .-IntToChar
	.globl	CharToInt
	.type	CharToInt, @function
CharToInt:
.LFB8:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)	# character, character
	movq	-24(%rbp), %rax	# character, tmp62
	movzbl	(%rax), %eax	# *character_1(D), D.3577
	movsbl	%al, %eax	# D.3577, tmp63
	movl	%eax, -4(%rbp)	# tmp63, string
	movl	-4(%rbp), %eax	# string, tmp64
	subl	$48, %eax	#, D.3578
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	CharToInt, .-CharToInt
	.globl	init
	.type	init, @function
init:
.LFB9:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	$0, -12(%rbp)	#, i
	jmp	.L40	#
.L45:
	movl	$0, -8(%rbp)	#, j
	jmp	.L41	#
.L44:
	movl	$0, -4(%rbp)	#, k
	jmp	.L42	#
.L43:
	movl	$.LC0, %edi	#,
	call	CharToInt	#
	movl	-4(%rbp), %edx	# k, tmp63
	movslq	%edx, %rdx	# tmp63, tmp62
	movl	-12(%rbp), %ecx	# i, tmp65
	movslq	%ecx, %rsi	# tmp65, tmp64
	movl	-8(%rbp), %ecx	# j, tmp67
	movslq	%ecx, %rcx	# tmp67, tmp66
	salq	$10, %rsi	#, tmp68
	addq	%rsi, %rcx	# tmp68, tmp69
	salq	$10, %rcx	#, tmp70
	addq	%rcx, %rdx	# tmp70, tmp71
	movl	%eax, field(,%rdx,4)	# D.3574, field
	addl	$1, -4(%rbp)	#, k
.L42:
	cmpl	$1023, -4(%rbp)	#, k
	jle	.L43	#,
	addl	$1, -8(%rbp)	#, j
.L41:
	cmpl	$1023, -8(%rbp)	#, j
	jle	.L44	#,
	addl	$1, -12(%rbp)	#, i
.L40:
	cmpl	$3, -12(%rbp)	#, i
	jle	.L45	#,
	movl	$0, %eax	#, D.3575
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	init, .-init
	.section	.rodata
.LC1:
	.string	"a+"
.LC2:
	.string	"\n"
.LC3:
	.string	"%i"
	.text
	.globl	saver
	.type	saver, @function
saver:
.LFB10:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$24, %rsp	#,
	movq	%rdi, -24(%rbp)	# file_, file_
	movl	$.LC1, %edx	#, D.3534
	movq	-24(%rbp), %rax	# file_, file_.99
	movq	%rdx, %rsi	# D.3534,
	movq	%rax, %rdi	# file_.99,
	.cfi_offset 3, -24
	call	fopen	#
	movq	%rax, file(%rip)	# file.100, file
	movq	file(%rip), %rax	# file, file.101
	testq	%rax, %rax	# file.101
	je	.L47	#,
	movl	$0, a(%rip)	#, a
	jmp	.L48	#
.L55:
	movl	$0, b(%rip)	#, b
	jmp	.L49	#
.L54:
	movl	$0, c(%rip)	#, c
	jmp	.L50	#
.L53:
	movl	a(%rip), %ecx	# a, a.102
	movl	b(%rip), %edx	# b, b.103
	movl	c(%rip), %eax	# c, c.104
	cltq
	movslq	%ecx, %rcx	# a.102, tmp93
	movslq	%edx, %rdx	# b.103, tmp94
	salq	$10, %rcx	#, tmp95
	addq	%rcx, %rdx	# tmp95, tmp96
	salq	$10, %rdx	#, tmp97
	addq	%rdx, %rax	# tmp97, tmp98
	movl	field(,%rax,4), %eax	# field, D.3543
	cmpl	$3000, %eax	#, D.3543
	je	.L51	#,
	movl	a(%rip), %ecx	# a, a.105
	movl	b(%rip), %edx	# b, b.106
	movl	c(%rip), %eax	# c, c.107
	cltq
	movslq	%ecx, %rcx	# a.105, tmp100
	movslq	%edx, %rdx	# b.106, tmp101
	salq	$10, %rcx	#, tmp102
	addq	%rcx, %rdx	# tmp102, tmp103
	salq	$10, %rdx	#, tmp104
	addq	%rdx, %rax	# tmp104, tmp105
	movl	field(,%rax,4), %ebx	# field, D.3549
	movl	$.LC2, %edi	#,
	call	CharToInt	#
	cmpl	%eax, %ebx	# D.3550, D.3549
	je	.L52	#,
	movl	a(%rip), %ecx	# a, a.108
	movl	b(%rip), %edx	# b, b.109
	movl	c(%rip), %eax	# c, c.110
	cltq
	movslq	%ecx, %rcx	# a.108, tmp107
	movslq	%edx, %rdx	# b.109, tmp108
	salq	$10, %rcx	#, tmp109
	addq	%rcx, %rdx	# tmp109, tmp110
	salq	$10, %rdx	#, tmp111
	addq	%rdx, %rax	# tmp111, tmp112
	movl	field(,%rax,4), %edx	# field, D.3556
	movl	$.LC3, %ecx	#, D.3557
	movq	file(%rip), %rax	# file, file.111
	movq	%rcx, %rsi	# D.3557,
	movq	%rax, %rdi	# file.111,
	movl	$0, %eax	#,
	call	fprintf	#
	jmp	.L51	#
.L52:
	movl	$.LC0, %edi	#,
	call	CharToInt	#
	movl	%eax, %edx	#, D.3560
	movl	$.LC3, %ecx	#, D.3561
	movq	file(%rip), %rax	# file, file.112
	movq	%rcx, %rsi	# D.3561,
	movq	%rax, %rdi	# file.112,
	movl	$0, %eax	#,
	call	fprintf	#
.L51:
	movl	c(%rip), %eax	# c, c.113
	addl	$1, %eax	#, c.114
	movl	%eax, c(%rip)	# c.114, c
.L50:
	movl	c(%rip), %eax	# c, c.115
	cmpl	$1023, %eax	#, c.115
	jle	.L53	#,
	movl	b(%rip), %eax	# b, b.116
	addl	$1, %eax	#, b.117
	movl	%eax, b(%rip)	# b.117, b
.L49:
	movl	b(%rip), %eax	# b, b.118
	cmpl	$1023, %eax	#, b.118
	jle	.L54	#,
	movl	a(%rip), %eax	# a, a.119
	addl	$1, %eax	#, a.120
	movl	%eax, a(%rip)	# a.120, a
.L48:
	movl	a(%rip), %eax	# a, a.121
	cmpl	$3, %eax	#, a.121
	jle	.L55	#,
.L47:
	movl	$0, %eax	#, D.3572
	addq	$24, %rsp	#,
	popq	%rbx	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	saver, .-saver
	.globl	from_where
	.type	from_where, @function
from_where:
.LFB11:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# search, search
	movl	$0, %eax	#, D.3532
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	from_where, .-from_where
	.globl	putintable
	.type	putintable, @function
putintable:
.LFB12:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r13	#
	pushq	%r12	#
	pushq	%rbx	#
	subq	$32, %rsp	#,
	movq	%rdi, -32(%rbp)	# character_, character_
	movq	%rsi, -40(%rbp)	# column, column
	movq	%rdx, -48(%rbp)	# row_pit, row_pit
	movl	$0, counter_putintable(%rip)	#, counter_putintable
	jmp	.L58	#
	.cfi_offset 3, -40
	.cfi_offset 12, -32
	.cfi_offset 13, -24
.L59:
	movq	-40(%rbp), %rax	# column, tmp74
	movl	(%rax), %r12d	# *column_5(D), D.3517
	movq	-48(%rbp), %rax	# row_pit, tmp75
	movl	(%rax), %ebx	# *row_pit_7(D), D.3518
	movl	counter_putintable(%rip), %r13d	# counter_putintable, counter_putintable.93
	movl	counter_putintable(%rip), %eax	# counter_putintable, counter_putintable.94
	cltq
	addq	-32(%rbp), %rax	# character_, D.3522
	movq	%rax, %rdi	# D.3522,
	call	CharToInt	#
	movslq	%r13d, %rdx	# counter_putintable.93, tmp76
	movslq	%r12d, %rsi	# D.3517, tmp77
	movslq	%ebx, %rcx	# D.3518, tmp78
	salq	$10, %rsi	#, tmp79
	addq	%rsi, %rcx	# tmp79, tmp80
	salq	$10, %rcx	#, tmp81
	addq	%rcx, %rdx	# tmp81, tmp82
	movl	%eax, field(,%rdx,4)	# D.3523, field
	movq	-48(%rbp), %rax	# row_pit, tmp83
	movl	(%rax), %eax	# *row_pit_7(D), lastrow.95
	movl	%eax, lastrow(%rip)	# lastrow.95, lastrow
	movl	counter_putintable(%rip), %eax	# counter_putintable, counter_putintable.96
	addl	$1, %eax	#, counter_putintable.97
	movl	%eax, counter_putintable(%rip)	# counter_putintable.97, counter_putintable
.L58:
	movl	counter_putintable(%rip), %eax	# counter_putintable, counter_putintable.98
	movslq	%eax, %rsi	# counter_putintable.98, D.3528
	movq	-32(%rbp), %rax	# character_, tmp84
	movq	$-1, -56(%rbp)	#, %sfp
	movq	%rax, %rdx	# tmp84, tmp87
	movl	$0, %eax	#, tmp89
	movq	-56(%rbp), %rcx	# %sfp,
	movq	%rdx, %rdi	# tmp87,
	repnz scasb
	movq	%rcx, %rax	#, tmp85
	notq	%rax	# tmp86
	subq	$1, %rax	#, D.3529
	cmpq	%rax, %rsi	# D.3529, D.3528
	jb	.L59	#,
	movl	$0, %eax	#, D.3530
	addq	$32, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%r13	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	putintable, .-putintable
	.globl	putintable_inlast
	.type	putintable_inlast, @function
putintable_inlast:
.LFB13:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# content, content
	movl	%esi, -12(%rbp)	# column_, column_
	movl	lastrow(%rip), %eax	# lastrow, lastrow.91
	addl	$1, %eax	#, row_.92
	movl	%eax, row_(%rip)	# row_.92, row_
	leaq	-12(%rbp), %rcx	#, tmp63
	movq	-8(%rbp), %rax	# content, tmp64
	movl	$row_, %edx	#,
	movq	%rcx, %rsi	# tmp63,
	movq	%rax, %rdi	# tmp64,
	call	putintable	#
	movl	$0, %eax	#, D.3515
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	putintable_inlast, .-putintable_inlast
	.section	.rodata
.LC4:
	.string	"%i.Spalte:\n"
.LC5:
	.string	"  %i. Reihe: "
	.text
	.globl	print_field
	.type	print_field, @function
print_field:
.LFB14:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	movq	%rdi, -24(%rbp)	# field, field
	movl	%esi, -28(%rbp)	# mode, mode
	movl	%edx, -32(%rbp)	# limiter_row, limiter_row
	movl	%ecx, -36(%rbp)	# limiter_column, limiter_column
	movl	%r8d, -40(%rbp)	# limiter_, limiter_
	cmpl	$0, -28(%rbp)	#, mode
	jne	.L62	#,
	.cfi_offset 3, -24
	movl	$0, x(%rip)	#, x
	jmp	.L63	#
.L71:
	movl	x(%rip), %eax	# x, x.37
	leal	1(%rax), %edx	#, D.3390
	movl	$.LC4, %eax	#, D.3391
	movl	%edx, %esi	# D.3390,
	movq	%rax, %rdi	# D.3391,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, y(%rip)	#, y
	jmp	.L64	#
.L70:
	movl	y(%rip), %eax	# y, y.38
	leal	1(%rax), %edx	#, D.3393
	movl	$.LC5, %eax	#, D.3394
	movl	%edx, %esi	# D.3393,
	movq	%rax, %rdi	# D.3394,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, word(%rip)	#, word
	jmp	.L65	#
.L69:
	movl	x(%rip), %eax	# x, x.39
	cltq
	salq	$22, %rax	#, D.3397
	addq	-24(%rbp), %rax	# field, D.3398
	movl	y(%rip), %ecx	# y, y.40
	movl	word(%rip), %edx	# word, word.41
	movslq	%edx, %rdx	# word.41, tmp162
	movslq	%ecx, %rcx	# y.40, tmp163
	salq	$10, %rcx	#, tmp164
	addq	%rcx, %rdx	# tmp164, tmp165
	movl	(%rax,%rdx,4), %eax	# *D.3398_19, D.3401
	testl	%eax, %eax	# D.3401
	je	.L66	#,
	movl	x(%rip), %eax	# x, x.42
	cltq
	salq	$22, %rax	#, D.3406
	addq	-24(%rbp), %rax	# field, D.3407
	movl	y(%rip), %ecx	# y, y.43
	movl	word(%rip), %edx	# word, word.44
	movslq	%edx, %rdx	# word.44, tmp166
	movslq	%ecx, %rcx	# y.43, tmp167
	salq	$10, %rcx	#, tmp168
	addq	%rcx, %rdx	# tmp168, tmp169
	movl	(%rax,%rdx,4), %ebx	# *D.3407_26, D.3410
	movl	$.LC2, %edi	#,
	call	CharToInt	#
	cmpl	%eax, %ebx	# D.3411, D.3410
	je	.L67	#,
	movl	x(%rip), %eax	# x, x.45
	cltq
	salq	$22, %rax	#, D.3416
	addq	-24(%rbp), %rax	# field, D.3417
	movl	y(%rip), %ecx	# y, y.46
	movl	word(%rip), %edx	# word, word.47
	movslq	%edx, %rdx	# word.47, tmp170
	movslq	%ecx, %rcx	# y.46, tmp171
	salq	$10, %rcx	#, tmp172
	addq	%rcx, %rdx	# tmp172, tmp173
	movl	(%rax,%rdx,4), %eax	# *D.3417_34, D.3420
	movl	%eax, %edi	# D.3420,
	call	IntToChar	#
	movsbl	%al, %eax	# D.3421, D.3422
	movl	%eax, %edi	# D.3422,
	call	putchar	#
	jmp	.L68	#
.L67:
	movl	$13, %edi	#,
	call	putchar	#
	jmp	.L68	#
.L66:
	movl	$13, %edi	#,
	call	putchar	#
.L68:
	movl	word(%rip), %eax	# word, word.48
	addl	$1, %eax	#, word.49
	movl	%eax, word(%rip)	# word.49, word
.L65:
	movl	word(%rip), %eax	# word, word.50
	cmpl	-40(%rbp), %eax	# limiter_, word.50
	jl	.L69	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	y(%rip), %eax	# y, y.51
	addl	$1, %eax	#, y.52
	movl	%eax, y(%rip)	# y.52, y
.L64:
	movl	y(%rip), %eax	# y, y.53
	cmpl	-32(%rbp), %eax	# limiter_row, y.53
	jl	.L70	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	x(%rip), %eax	# x, x.54
	addl	$1, %eax	#, x.55
	movl	%eax, x(%rip)	# x.55, x
.L63:
	movl	x(%rip), %eax	# x, x.56
	cmpl	-36(%rbp), %eax	# limiter_column, x.56
	jl	.L71	#,
	movl	$10, %edi	#,
	call	putchar	#
	jmp	.L72	#
.L62:
	cmpl	$1, -28(%rbp)	#, mode
	jne	.L73	#,
	movl	$0, x(%rip)	#, x
	jmp	.L74	#
.L82:
	movl	x(%rip), %eax	# x, x.57
	leal	1(%rax), %edx	#, D.3438
	movl	$.LC4, %eax	#, D.3439
	movl	%edx, %esi	# D.3438,
	movq	%rax, %rdi	# D.3439,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, y(%rip)	#, y
	jmp	.L75	#
.L81:
	movl	y(%rip), %eax	# y, y.58
	leal	1(%rax), %edx	#, D.3441
	movl	$.LC5, %eax	#, D.3442
	movl	%edx, %esi	# D.3441,
	movq	%rax, %rdi	# D.3442,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, word(%rip)	#, word
	jmp	.L76	#
.L80:
	movl	x(%rip), %eax	# x, x.59
	cltq
	salq	$22, %rax	#, D.3445
	addq	-24(%rbp), %rax	# field, D.3446
	movl	y(%rip), %ecx	# y, y.60
	movl	word(%rip), %edx	# word, word.61
	movslq	%edx, %rdx	# word.61, tmp174
	movslq	%ecx, %rcx	# y.60, tmp175
	salq	$10, %rcx	#, tmp176
	addq	%rcx, %rdx	# tmp176, tmp177
	movl	(%rax,%rdx,4), %eax	# *D.3446_58, D.3449
	testl	%eax, %eax	# D.3449
	je	.L77	#,
	movl	x(%rip), %eax	# x, x.62
	cltq
	salq	$22, %rax	#, D.3454
	addq	-24(%rbp), %rax	# field, D.3455
	movl	y(%rip), %ecx	# y, y.63
	movl	word(%rip), %edx	# word, word.64
	movslq	%edx, %rdx	# word.64, tmp178
	movslq	%ecx, %rcx	# y.63, tmp179
	salq	$10, %rcx	#, tmp180
	addq	%rcx, %rdx	# tmp180, tmp181
	movl	(%rax,%rdx,4), %ebx	# *D.3455_65, D.3458
	movl	$.LC2, %edi	#,
	call	CharToInt	#
	cmpl	%eax, %ebx	# D.3459, D.3458
	je	.L78	#,
	movl	x(%rip), %eax	# x, x.65
	cltq
	salq	$22, %rax	#, D.3464
	addq	-24(%rbp), %rax	# field, D.3465
	movl	y(%rip), %ecx	# y, y.66
	movl	word(%rip), %edx	# word, word.67
	movslq	%edx, %rdx	# word.67, tmp182
	movslq	%ecx, %rcx	# y.66, tmp183
	salq	$10, %rcx	#, tmp184
	addq	%rcx, %rdx	# tmp184, tmp185
	movl	(%rax,%rdx,4), %eax	# *D.3465_73, D.3468
	movl	%eax, %edi	# D.3468,
	call	IntToChar	#
	movsbl	%al, %eax	# D.3469, D.3470
	movl	%eax, %edi	# D.3470,
	call	putchar	#
	jmp	.L79	#
.L78:
	movl	$13, %edi	#,
	call	putchar	#
	jmp	.L79	#
.L77:
	movl	$13, %edi	#,
	call	putchar	#
.L79:
	movl	word(%rip), %eax	# word, word.68
	addl	$1, %eax	#, word.69
	movl	%eax, word(%rip)	# word.69, word
.L76:
	movl	word(%rip), %eax	# word, word.70
	cmpl	$1023, %eax	#, word.70
	jle	.L80	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	y(%rip), %eax	# y, y.71
	addl	$1, %eax	#, y.72
	movl	%eax, y(%rip)	# y.72, y
.L75:
	movl	y(%rip), %eax	# y, y.73
	cmpl	$1023, %eax	#, y.73
	jle	.L81	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	x(%rip), %eax	# x, x.74
	addl	$1, %eax	#, x.75
	movl	%eax, x(%rip)	# x.75, x
.L74:
	movl	x(%rip), %eax	# x, x.76
	cmpl	$3, %eax	#, x.76
	jle	.L82	#,
	movl	$10, %edi	#,
	call	putchar	#
	jmp	.L72	#
.L73:
	cmpl	$2, -28(%rbp)	#, mode
	jne	.L83	#,
	movl	$0, x(%rip)	#, x
	jmp	.L84	#
.L89:
	movl	x(%rip), %eax	# x, x.77
	leal	1(%rax), %edx	#, D.3486
	movl	$.LC4, %eax	#, D.3487
	movl	%edx, %esi	# D.3486,
	movq	%rax, %rdi	# D.3487,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, y(%rip)	#, y
	jmp	.L85	#
.L88:
	movl	y(%rip), %eax	# y, y.78
	leal	1(%rax), %edx	#, D.3489
	movl	$.LC5, %eax	#, D.3490
	movl	%edx, %esi	# D.3489,
	movq	%rax, %rdi	# D.3490,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, word(%rip)	#, word
	jmp	.L86	#
.L87:
	movl	x(%rip), %eax	# x, x.79
	cltq
	salq	$22, %rax	#, D.3493
	addq	-24(%rbp), %rax	# field, D.3494
	movl	y(%rip), %ecx	# y, y.80
	movl	word(%rip), %edx	# word, word.81
	movslq	%edx, %rdx	# word.81, tmp186
	movslq	%ecx, %rcx	# y.80, tmp187
	salq	$10, %rcx	#, tmp188
	addq	%rcx, %rdx	# tmp188, tmp189
	movl	(%rax,%rdx,4), %edx	# *D.3494_97, D.3497
	movl	$.LC3, %eax	#, D.3498
	movl	%edx, %esi	# D.3497,
	movq	%rax, %rdi	# D.3498,
	movl	$0, %eax	#,
	call	printf	#
	movl	word(%rip), %eax	# word, word.82
	addl	$1, %eax	#, word.83
	movl	%eax, word(%rip)	# word.83, word
.L86:
	movl	word(%rip), %eax	# word, word.84
	cmpl	-40(%rbp), %eax	# limiter_, word.84
	jl	.L87	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	y(%rip), %eax	# y, y.85
	addl	$1, %eax	#, y.86
	movl	%eax, y(%rip)	# y.86, y
.L85:
	movl	y(%rip), %eax	# y, y.87
	cmpl	-32(%rbp), %eax	# limiter_row, y.87
	jl	.L88	#,
	movl	$10, %edi	#,
	call	putchar	#
	movl	x(%rip), %eax	# x, x.88
	addl	$1, %eax	#, x.89
	movl	%eax, x(%rip)	# x.89, x
.L84:
	movl	x(%rip), %eax	# x, x.90
	cmpl	-36(%rbp), %eax	# limiter_column, x.90
	jl	.L89	#,
	movl	$10, %edi	#,
	call	putchar	#
	jmp	.L72	#
.L83:
	cmpl	$3, -28(%rbp)	#, mode
	jne	.L72	#,
	movl	$0, %eax	#, D.3511
	jmp	.L90	#
.L72:
	movl	$0, %eax	#, D.3511
.L90:
	addq	$40, %rsp	#,
	popq	%rbx	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	print_field, .-print_field
	.section	.rodata
	.align 8
.LC6:
	.string	"Letzte Hinzugef\303\274gte Zeile: %i\n"
	.text
	.globl	printlastrow
	.type	printlastrow, @function
printlastrow:
.LFB15:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# rp, rp
	cmpl	$1, -4(%rbp)	#, rp
	jne	.L92	#,
	movl	lastrow(%rip), %eax	# lastrow, D.3383
	jmp	.L93	#
.L92:
	movl	lastrow(%rip), %edx	# lastrow, lastrow.36
	movl	$.LC6, %eax	#, D.3385
	movl	%edx, %esi	# lastrow.36,
	movq	%rax, %rdi	# D.3385,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, %eax	#, D.3383
.L93:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	printlastrow, .-printlastrow
	.section	.rodata
.LC7:
	.string	"Content-Type: text/html\n"
	.text
	.globl	print_header
	.type	print_header, @function
print_header:
.LFB16:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	$.LC7, %edi	#,
	call	puts	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	print_header, .-print_header
	.section	.rodata
.LC8:
	.string	"<html><head>"
.LC9:
	.string	"<title>%s</title>\n"
.LC10:
	.string	"</head><body>"
	.text
	.globl	print_html_header
	.type	print_html_header, @function
print_html_header:
.LFB17:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# titel, titel
	movl	$.LC8, %edi	#,
	call	puts	#
	movl	$.LC9, %eax	#, D.3380
	movq	-8(%rbp), %rdx	# titel, tmp60
	movq	%rdx, %rsi	# tmp60,
	movq	%rax, %rdi	# D.3380,
	movl	$0, %eax	#,
	call	printf	#
	movl	$.LC10, %edi	#,
	call	puts	#
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	print_html_header, .-print_html_header
	.section	.rodata
.LC11:
	.string	"<%s %s>"
	.text
	.globl	add_tag
	.type	add_tag, @function
add_tag:
.LFB18:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# tag, tag
	movq	%rsi, -16(%rbp)	# attr, attr
	movl	$.LC11, %eax	#, D.3377
	movq	-16(%rbp), %rdx	# attr, tmp62
	movq	-8(%rbp), %rcx	# tag, tmp63
	movq	%rcx, %rsi	# tmp63,
	movq	%rax, %rdi	# D.3377,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, %eax	#, D.3378
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE18:
	.size	add_tag, .-add_tag
	.section	.rodata
.LC12:
	.string	"<%s>%s"
.LC13:
	.string	"</%s>"
	.text
	.globl	print_tag_content
	.type	print_tag_content, @function
print_tag_content:
.LFB19:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# tc, tc
	movl	%esi, -12(%rbp)	# t_choice, t_choice
	movl	-12(%rbp), %eax	# t_choice, tmp69
	movslq	%eax, %rdx	# tmp69, D.3367
	movq	%rdx, %rax	# D.3367, tmp70
	salq	$2, %rax	#, tmp70
	addq	%rdx, %rax	# D.3367, tmp70
	salq	$2, %rax	#, tmp71
	leaq	tags(%rax), %rcx	#, D.3369
	movl	$.LC12, %eax	#, D.3370
	movq	-8(%rbp), %rdx	# tc, tmp72
	movq	%rcx, %rsi	# D.3369,
	movq	%rax, %rdi	# D.3370,
	movl	$0, %eax	#,
	call	printf	#
	movl	-12(%rbp), %eax	# t_choice, tmp73
	movslq	%eax, %rdx	# tmp73, D.3371
	movq	%rdx, %rax	# D.3371, tmp74
	salq	$2, %rax	#, tmp74
	addq	%rdx, %rax	# D.3371, tmp74
	salq	$2, %rax	#, tmp75
	leaq	tags(%rax), %rdx	#, D.3373
	movl	$.LC13, %eax	#, D.3374
	movq	%rdx, %rsi	# D.3373,
	movq	%rax, %rdi	# D.3374,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, %eax	#, D.3375
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE19:
	.size	print_tag_content, .-print_tag_content
	.globl	addslash
	.type	addslash, @function
addslash:
.LFB20:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# name, name
	movl	$.LC13, %eax	#, D.3364
	movq	-8(%rbp), %rdx	# name, tmp62
	movq	%rdx, %rsi	# tmp62,
	movq	%rax, %rdi	# D.3364,
	movl	$0, %eax	#,
	call	printf	#
	movl	$0, %eax	#, D.3365
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	addslash, .-addslash
	.section	.rodata
.LC14:
	.string	"div"
	.text
	.globl	print_content
	.type	print_content, @function
print_content:
.LFB21:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# content, content
	movl	$.LC0, %esi	#,
	movl	$.LC14, %edi	#,
	call	add_tag	#
	movq	-8(%rbp), %rax	# content, tmp61
	movq	%rax, %rdi	# tmp61,
	call	puts	#
	movl	$0, %eax	#, D.3362
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	print_content, .-print_content
	.globl	print_inline_css
	.type	print_inline_css, @function
print_inline_css:
.LFB22:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# element, element
	movq	%rsi, -16(%rbp)	# attr_, attr_
	movl	$0, %eax	#, D.3360
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	print_inline_css, .-print_inline_css
	.section	.rodata
.LC15:
	.string	"</body></html>"
	.text
	.globl	print_footer
	.type	print_footer, @function
print_footer:
.LFB23:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	$.LC15, %eax	#, D.3359
	movq	%rax, %rdi	# D.3359,
	movl	$0, %eax	#,
	call	printf	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	print_footer, .-print_footer
	.section	.rodata
.LC16:
	.string	"QUERY_STRING"
.LC17:
	.string	"="
.LC18:
	.string	"%s"
.LC19:
	.string	"<h1>falsche variable</h1>"
	.text
	.globl	get_get_var
	.type	get_get_var, @function
get_get_var:
.LFB24:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# position, position
	movl	$.LC16, %edi	#,
	call	getenv	#
	movq	%rax, var(%rip)	# var.17, var
	movq	var(%rip), %rax	# var, var.18
	testq	%rax, %rax	# var.18
	je	.L103	#,
	movl	$1, ggv_c(%rip)	#, ggv_c
	movq	var(%rip), %rax	# var, var.19
	movl	$61, %esi	#,
	movq	%rax, %rdi	# var.19,
	call	strchr	#
	testq	%rax, %rax	# D.3319
	je	.L112	#,
	movq	var(%rip), %rax	# var, var.20
	movl	$.LC17, %esi	#,
	movq	%rax, %rdi	# var.20,
	call	strcspn	#
	movl	%eax, pos(%rip)	# pos.21, pos
	movq	var(%rip), %rdx	# var, var.22
	movl	pos(%rip), %eax	# pos, pos.23
	cltq
	addq	%rdx, %rax	# var.22, D.3328
	movb	$0, (%rax)	#, *D.3328_12
	movl	$0, b(%rip)	#, b
	jmp	.L105	#
.L109:
	movq	var(%rip), %rcx	# var, var.24
	movl	b(%rip), %eax	# b, b.25
	movslq	%eax, %rdx	# b.25, D.3331
	movq	%rdx, %rax	# D.3331, tmp89
	salq	$2, %rax	#, tmp89
	addq	%rdx, %rax	# D.3331, tmp89
	salq	$2, %rax	#, tmp90
	addq	$vars, %rax	#, D.3333
	movq	%rcx, %rsi	# var.24,
	movq	%rax, %rdi	# D.3333,
	call	strcmp	#
	testl	%eax, %eax	# D.3334
	jne	.L106	#,
	movl	false_var_error_(%rip), %eax	# false_var_error_, false_var_error_.26
	cmpl	-4(%rbp), %eax	# position, false_var_error_.26
	jne	.L107	#,
	movq	var(%rip), %rdx	# var, var.27
	movl	$.LC18, %eax	#, D.3341
	movq	%rdx, %rsi	# var.27,
	movq	%rax, %rdi	# D.3341,
	movl	$0, %eax	#,
	call	printf	#
.L107:
	movl	false_var_error_(%rip), %eax	# false_var_error_, false_var_error_.28
	addl	$1, %eax	#, false_var_error_.29
	movl	%eax, false_var_error_(%rip)	# false_var_error_.29, false_var_error_
	jmp	.L108	#
.L106:
	movl	$1, false_var_error(%rip)	#, false_var_error
.L108:
	movl	b(%rip), %eax	# b, b.30
	addl	$1, %eax	#, b.31
	movl	%eax, b(%rip)	# b.31, b
.L105:
	movl	b(%rip), %edx	# b, b.32
	movl	vars_length(%rip), %eax	# vars_length, vars_length.33
	cmpl	%eax, %edx	# vars_length.33, b.32
	jl	.L109	#,
	movl	false_var_error(%rip), %eax	# false_var_error, false_var_error.34
	cmpl	$1, %eax	#, false_var_error.34
	jne	.L110	#,
	movl	false_var_error_(%rip), %eax	# false_var_error_, false_var_error_.35
	testl	%eax, %eax	# false_var_error_.35
	jne	.L110	#,
	movl	$.LC19, %edi	#,
	call	puts	#
	jmp	.L110	#
.L112:
	nop
.L103:
	movl	$0, %eax	#, D.3357
	jmp	.L111	#
.L110:
	movl	$0, %eax	#, D.3357
.L111:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	get_get_var, .-get_get_var
	.globl	get_post_var
	.type	get_post_var, @function
get_post_var:
.LFB25:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# position, position
	movq	size(%rip), %rax	# size, size.14
	addq	$1, %rax	#, D.3307
	movq	%rax, %rdi	# D.3307,
	call	malloc	#
	movq	%rax, puffer_x(%rip)	# puffer_x.15, puffer_x
	movq	puffer_x(%rip), %rax	# puffer_x, puffer_x.16
	testq	%rax, %rax	# puffer_x.16
	jne	.L114	#,
	movl	$0, %eax	#, D.3312
	jmp	.L115	#
.L114:
	movl	$0, %eax	#, D.3312
.L115:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	get_post_var, .-get_post_var
	.globl	save_hml
	.type	save_hml, @function
save_hml:
.LFB26:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# on, on
	movl	$0, %eax	#, D.3304
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	save_hml, .-save_hml
	.globl	build_menu
	.type	build_menu, @function
build_menu:
.LFB27:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	$0, %eax	#, D.3302
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
	.size	build_menu, .-build_menu
	.globl	tags
	.data
	.align 32
	.type	tags, @object
	.size	tags, 1620
tags:
	.string	"html"
	.zero	15
	.string	"head"
	.zero	15
	.string	"body"
	.zero	15
	.string	"div"
	.zero	16
	.string	"p"
	.zero	18
	.string	"ul"
	.zero	17
	.string	"li"
	.zero	17
	.string	"br"
	.zero	17
	.string	"title"
	.zero	14
	.string	"abbr"
	.zero	15
	.string	"acronym"
	.zero	12
	.string	"address"
	.zero	12
	.string	"blockquote"
	.zero	9
	.string	"cite"
	.zero	15
	.string	"code"
	.zero	15
	.string	"dfn"
	.zero	16
	.string	"em"
	.zero	17
	.string	"h1"
	.zero	17
	.string	"h2"
	.zero	17
	.string	"h3"
	.zero	17
	.string	"h4"
	.zero	17
	.string	"h5"
	.zero	17
	.string	"h6"
	.zero	17
	.string	"kbd"
	.zero	16
	.string	"pre"
	.zero	16
	.string	"q"
	.zero	18
	.string	"samp"
	.zero	15
	.string	"span"
	.zero	15
	.string	"strong"
	.zero	13
	.string	"var"
	.zero	16
	.string	"a"
	.zero	18
	.string	"dl"
	.zero	17
	.string	"dt"
	.zero	17
	.string	"dd"
	.zero	17
	.string	"ol"
	.zero	17
	.string	"b"
	.zero	18
	.string	"big"
	.zero	16
	.string	"hr"
	.zero	17
	.string	"i"
	.zero	18
	.string	"small"
	.zero	14
	.string	"sub "
	.zero	15
	.string	"sub"
	.zero	16
	.string	"tt"
	.zero	17
	.string	"del"
	.zero	16
	.string	"ins"
	.zero	16
	.string	"bdo"
	.zero	16
	.string	"form"
	.zero	15
	.string	"input"
	.zero	14
	.string	"select"
	.zero	13
	.string	"option"
	.zero	13
	.string	"textarea"
	.zero	11
	.string	"button"
	.zero	13
	.string	"fieldset"
	.zero	11
	.string	"label"
	.zero	14
	.string	"legend"
	.zero	13
	.string	"optgroup"
	.zero	11
	.string	"caption"
	.zero	12
	.string	"table"
	.zero	14
	.string	"td"
	.zero	17
	.string	"th"
	.zero	17
	.string	"tr"
	.zero	17
	.string	"col"
	.zero	16
	.string	"colgroup"
	.zero	11
	.string	"tbody"
	.zero	14
	.string	"thead"
	.zero	14
	.string	"tbody"
	.zero	14
	.string	"img"
	.zero	16
	.string	"area"
	.zero	15
	.string	"img"
	.zero	16
	.string	"map"
	.zero	16
	.string	"object"
	.zero	13
	.string	"param"
	.zero	14
	.string	"frameset"
	.zero	11
	.string	"frame"
	.zero	14
	.string	"noframes"
	.zero	11
	.string	"iframe"
	.zero	13
	.string	"noscript"
	.zero	11
	.string	"script"
	.zero	13
	.string	"link"
	.zero	15
	.string	"base"
	.zero	15
	.string	"meta"
	.zero	15
	.globl	vars
	.align 32
	.type	vars, @object
	.size	vars, 100
vars:
	.string	"hallo"
	.zero	14
	.string	"site"
	.zero	15
	.string	"abc"
	.zero	16
	.string	"bla"
	.zero	16
	.string	"update"
	.zero	13
	.globl	post_vars
	.align 32
	.type	post_vars, @object
	.size	post_vars, 80
post_vars:
	.string	"username"
	.zero	11
	.string	""
	.zero	19
	.string	""
	.zero	19
	.string	""
	.zero	19
	.globl	_GET
	.bss
	.align 32
	.type	_GET, @object
	.size	_GET, 8000
_GET:
	.zero	8000
	.globl	_POST
	.data
	.align 32
	.type	_POST, @object
	.size	_POST, 8000
_POST:
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	"a"
	.zero	18
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.string	""
	.zero	19
	.string	""
	.zero	19
	.zero	360
	.globl	vars_length
	.align 4
	.type	vars_length, @object
	.size	vars_length, 4
vars_length:
	.long	5
	.globl	tags_length
	.align 4
	.type	tags_length, @object
	.size	tags_length, 4
tags_length:
	.long	81
	.globl	post_length
	.align 4
	.type	post_length, @object
	.size	post_length, 4
post_length:
	.long	4
	.globl	_GET_length
	.align 4
	.type	_GET_length, @object
	.size	_GET_length, 4
_GET_length:
	.long	400
	.globl	_POST_length
	.align 4
	.type	_POST_length, @object
	.size	_POST_length, 4
_POST_length:
	.long	400
	.comm	puffer_,1024,32
	.comm	field,16777216,32
	.comm	setpoint,4,4
	.comm	player,16777216,32
	.comm	a,4,4
	.comm	b,4,4
	.comm	c,4,4
	.comm	d,4,4
	.comm	e,4,4
	.comm	f,4,4
	.comm	g,4,4
	.comm	h,4,4
	.comm	i,4,4
	.comm	j,4,4
	.comm	k,4,4
	.comm	l,4,4
	.comm	m,4,4
	.comm	n,4,4
	.comm	o,4,4
	.comm	p,4,4
	.comm	q,4,4
	.comm	r,4,4
	.comm	s,4,4
	.comm	t,4,4
	.comm	u,4,4
	.comm	v,4,4
	.comm	w,4,4
	.comm	x,4,4
	.comm	y,4,4
	.comm	z,4,4
	.comm	word,4,4
	.comm	string,4,4
	.comm	counter_putintable,4,4
	.comm	column,4,4
	.comm	column_,4,4
	.comm	row_pit,4,4
	.comm	row_,4,4
	.comm	lastrowx,4,4
	.comm	mode,4,4
	.comm	limiter,4,4
	.comm	limiter_,4,4
	.comm	limiter_column,4,4
	.comm	check,4,4
	.comm	zahl,4,4
	.comm	pos,4,4
	.comm	false_var_error,4,4
	.globl	false_var_error_
	.bss
	.align 4
	.type	false_var_error_, @object
	.size	false_var_error_, 4
false_var_error_:
	.zero	4
	.comm	ggv_c,4,4
	.comm	character,1,1
	.comm	character__,4,1
	.comm	character_,1,1
	.comm	file_,1,1
	.comm	content,1024,32
	.globl	zero
	.section	.rodata
.LC20:
	.string	"13"
	.data
	.align 8
	.type	zero, @object
	.size	zero, 8
zero:
	.quad	.LC20
	.comm	file,8,8
	.globl	lastrow
	.align 4
	.type	lastrow, @object
	.size	lastrow, 4
lastrow:
	.long	-1
	.comm	var,8,8
	.globl	getvar
	.align 8
	.type	getvar, @object
	.size	getvar, 8
getvar:
	.quad	.LC0
	.comm	size,8,8
	.comm	var_copy,8,8
	.comm	puffer_x,8,8
	.comm	request,8,8
	.comm	cont_len,8,8
	.comm	cgi_string,8,8
	.globl	ausgabe_string
	.align 8
	.type	ausgabe_string, @object
	.size	ausgabe_string, 8
ausgabe_string:
	.quad	.LC0
	.globl	ausgabe_content
	.align 8
	.type	ausgabe_content, @object
	.size	ausgabe_content, 8
ausgabe_content:
	.quad	.LC0
	.comm	post_var,8,8
	.comm	content_length,4,4
	.globl	content_post
	.bss
	.align 8
	.type	content_post, @object
	.size	content_post, 8
content_post:
	.zero	8
	.globl	error
	.align 4
	.type	error, @object
	.size	error, 4
error:
	.zero	4
	.globl	titel_
	.section	.rodata
.LC21:
	.string	"Hallo"
	.data
	.align 8
	.type	titel_, @object
	.size	titel_, 8
titel_:
	.quad	.LC21
	.section	.rodata
.LC22:
	.string	"&"
.LC23:
	.string	"method=normal&action=post"
.LC24:
	.string	"method"
.LC25:
	.string	"normal"
.LC26:
	.string	"action"
.LC27:
	.string	"post"
.LC28:
	.string	"CONTENT_LENGTH"
.LC29:
	.string	"\n%s=%s\n"
	.align 8
.LC30:
	.string	"style={float:left;} id='left' class='left'"
.LC31:
	.string	"ul"
.LC32:
	.string	"xddddddd!!!"
.LC33:
	.string	"style={width:500;height:500}"
.LC34:
	.string	"textarea"
.LC35:
	.string	"1. Variable: %s=%s\n"
.LC36:
	.string	"2. Variable: %s=%s\n"
	.align 8
.LC37:
	.string	"action=http://localhost/cgi-bin/framework/webframework?method=normal&action=post method=post"
.LC38:
	.string	"form"
.LC39:
	.string	"type='test' name='site'"
.LC40:
	.string	"input"
	.align 8
.LC41:
	.string	"type='submit' id='edit' name='submit' value='suchen'"
	.text
	.globl	main
	.type	main, @function
main:
.LFB28:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	call	print_header	#
	movq	titel_(%rip), %rax	# titel_, titel_.0
	movq	%rax, %rdi	# titel_.0,
	call	print_html_header	#
	movl	$0, %ecx	#,
	movl	$.LC22, %edx	#,
	movl	$.LC17, %esi	#,
	movl	$.LC23, %edi	#,
	call	parse_content	#
	movl	$.LC24, %esi	#,
	movl	$_GET, %edi	#,
	call	strcmp	#
	testl	%eax, %eax	# D.3249
	jne	.L126	#,
	movl	$_GET+20, %eax	#, D.3252
	movl	$.LC25, %esi	#,
	movq	%rax, %rdi	# D.3252,
	call	strcmp	#
	testl	%eax, %eax	# D.3253
	jne	.L120	#,
	movl	$.LC26, %esi	#,
	movl	$_GET+400, %edi	#,
	call	strcmp	#
	testl	%eax, %eax	# D.3256
	jne	.L120	#,
	movl	$_GET+420, %eax	#, D.3259
	movl	$.LC27, %esi	#,
	movq	%rax, %rdi	# D.3259,
	call	strcmp	#
	testl	%eax, %eax	# D.3260
	jne	.L120	#,
	movl	$.LC28, %edi	#,
	call	getenv	#
	movq	%rax, -8(%rbp)	# tmp94, content_length
	cmpq	$0, -8(%rbp)	#, content_length
	je	.L127	#,
.L121:
	movq	-8(%rbp), %rax	# content_length, tmp95
	movq	%rax, %rdi	# tmp95,
	call	atoi	#
	cltq
	movq	%rax, size(%rip)	# size.1, size
	movq	size(%rip), %rax	# size, size.2
	testq	%rax, %rax	# size.2
	je	.L128	#,
.L123:
	movq	size(%rip), %rax	# size, size.3
	addq	$1, %rax	#, D.3271
	movq	%rax, %rdi	# D.3271,
	call	malloc	#
	movq	%rax, content_post(%rip)	# content_post.4, content_post
	movq	content_post(%rip), %rax	# content_post, content_post.5
	testq	%rax, %rax	# content_post.5
	jne	.L124	#,
	movq	content_post(%rip), %rax	# content_post, content_post.6
	movq	%rax, %rdi	# content_post.6,
	call	free	#
	jmp	.L122	#
.L124:
	movq	stdin(%rip), %rax	# stdin, stdin.7
	movq	%rax, %rdx	# stdin.7, stdin.8
	movq	size(%rip), %rax	# size, size.9
	addl	$1, %eax	#, D.3281
	movl	%eax, %ecx	# D.3281, D.3282
	movq	content_post(%rip), %rax	# content_post, content_post.10
	movl	%ecx, %esi	# D.3282,
	movq	%rax, %rdi	# content_post.10,
	call	fgets	#
	testq	%rax, %rax	# D.3284
	jne	.L125	#,
	movq	content_post(%rip), %rax	# content_post, content_post.11
	movq	%rax, %rdi	# content_post.11,
	call	free	#
	jmp	.L122	#
.L125:
	movq	content_post(%rip), %rax	# content_post, content_post.12
	movl	$1, %ecx	#,
	movl	$.LC22, %edx	#,
	movl	$.LC17, %esi	#,
	movq	%rax, %rdi	# content_post.12,
	call	parse_content	#
	movl	$_POST+20, %edx	#, D.3289
	movl	$.LC29, %eax	#, D.3290
	movl	$_POST, %esi	#,
	movq	%rax, %rdi	# D.3290,
	movl	$0, %eax	#,
	call	printf	#
	movl	$.LC30, %esi	#,
	movl	$.LC31, %edi	#,
	call	add_tag	#
	movl	$.LC31, %edi	#,
	call	addslash	#
.L120:
	movl	error(%rip), %eax	# error, error.13
	cmpl	$1, %eax	#, error.13
	jne	.L122	#,
	movl	$.LC32, %eax	#, D.3295
	movq	%rax, %rdi	# D.3295,
	movl	$0, %eax	#,
	call	printf	#
	jmp	.L122	#
.L126:
	nop
	jmp	.L122	#
.L127:
	nop
	jmp	.L122	#
.L128:
	nop
.L122:
	movl	$.LC33, %esi	#,
	movl	$.LC34, %edi	#,
	call	add_tag	#
	movl	$_GET+20, %edx	#, D.3296
	movl	$.LC35, %eax	#, D.3297
	movl	$_GET, %esi	#,
	movq	%rax, %rdi	# D.3297,
	movl	$0, %eax	#,
	call	printf	#
	movl	$_GET+420, %edx	#, D.3298
	movl	$.LC36, %eax	#, D.3299
	movl	$_GET+400, %esi	#,
	movq	%rax, %rdi	# D.3299,
	movl	$0, %eax	#,
	call	printf	#
	movl	$.LC34, %edi	#,
	call	addslash	#
	movl	$.LC37, %esi	#,
	movl	$.LC38, %edi	#,
	call	add_tag	#
	movl	$.LC39, %esi	#,
	movl	$.LC40, %edi	#,
	call	add_tag	#
	movl	$.LC41, %esi	#,
	movl	$.LC40, %edi	#,
	call	add_tag	#
	movl	$.LC40, %edi	#,
	call	addslash	#
	movl	$.LC38, %edi	#,
	call	addslash	#
	movl	$0, %eax	#,
	call	print_footer	#
	movl	$0, %eax	#, D.3300
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE28:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
