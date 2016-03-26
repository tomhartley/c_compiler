	.text
	.align 2
	.globl  f
	.ent  f
	.type  f, @function
f:
	addiu	$sp,$sp,-8
	sw	$fp,4($sp)
	move	$fp,$sp
	ADDI $sp, $sp, -4
	SW $4, 0($fp)
	ADDI $sp, $sp, -4
	SW $5, -4($fp)
	#starting scope
	LI $2, 10
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SLT $2, $2, $3
	BEQ $0, $2, $L0
	#starting scope
	LI $2, 1
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L1
$L0:
$L1:
	LI $2, 10
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SLT $2, $3, $2
	BEQ $0, $2, $L2
	#starting scope
	LI $2, 2
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L3
$L2:
$L3:
	LI $2, 11
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDIU $2, $2, 1
	SLT $2, $3, $2
	BEQ $0, $2, $L4
	#starting scope
	LI $2, 3
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L5
$L4:
$L5:
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDIU $2, $2, -1
	SLT $2, $2, $3
	BEQ $0, $2, $L6
	#starting scope
	LI $2, 4
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L7
$L6:
$L7:
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $2, 1
	BEQ $0, $2, $L8
	#starting scope
	LI $2, 5
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L9
$L8:
$L9:
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 0
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	AND $2, $2, $3
	BEQ $0, $2, $L10
	#starting scope
	LI $2, 6
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L11
$L10:
$L11:
	LI $2, 0
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 1
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	AND $2, $2, $3
	BEQ $0, $2, $L12
	#starting scope
	LI $2, 7
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L13
$L12:
$L13:
	LI $2, 0
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 0
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	OR $2, $2, $3
	BEQ $0, $2, $L14
	#starting scope
	LI $2, 8
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L15
$L14:
$L15:
	LI $2, 0
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 0
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L16
	#starting scope
	LI $2, 9
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L17
$L16:
$L17:
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SUBU $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L18
	#starting scope
	LI $2, 10
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L19
$L18:
$L19:
	LI $2, 19
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L20
	#starting scope
	LI $2, 11
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L21
$L20:
$L21:
	LI $2, 6
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SLL $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L22
	#starting scope
	LI $2, 12
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L23
$L22:
$L23:
	LI $2, 4
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SRA $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L24
	#starting scope
	LI $2, 13
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L25
$L24:
$L25:
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 1
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	AND $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L26
	#starting scope
	LI $2, 14
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L27
$L26:
$L27:
	LI $2, 11
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 3
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	OR $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L28
	#starting scope
	LI $2, 15
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L29
$L28:
$L29:
	LI $2, 20
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 4
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 5
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L30
	#starting scope
	LI $2, 16
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L31
$L30:
$L31:
	LI $2, 4
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 5
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 20
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	DIV $2, $3
	MFLO $2
	NOP
	NOP
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L32
	#starting scope
	LI $2, 17
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L33
$L32:
$L33:
	LI $2, 2
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 3
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 20
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	DIV $2, $3
	MFHI $2
	NOP
	NOP
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L34
	#starting scope
	LI $2, 18
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L35
$L34:
$L35:
	LI $2, 10
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 3
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	BEQ $0, $2, $L36
	#starting scope
	LI $2, 19
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 0 #ending scope
	BEQ $0, $0, $L37
$L36:
$L37:
	LI $2, 0
	ADDI $sp, $sp, -4
	SW $2, -8($fp)
	LI $2, 2
	BEQ $0, $2, $L38
	LI $2, 3
	BEQ $0, $2, $L38
	LI $2, 1
	BEQ $0, $0, $L39
$L38:
	LI $2, 0
$L39:
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 2
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 5
	BNE $0, $2, $L40
	LI $2, 0
	BNE $0, $2, $L40
	LI $2, 0
	BEQ $0, $0, $L41
$L40:
	LI $2, 1
$L41:
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 4
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $2, 1
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 8
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 8
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	XOR $2, $2, $3
	SLTU $2, $0, $2
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 16
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 8
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SLT $2, $3, $2
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 32
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 10
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	SLT $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 64
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDIU $2, $2, 1
	SLT $2, $3, $2
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LI $2, 128
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LI $2, 9
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDIU $2, $2, -1
	SLT $2, $2, $3
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	MULT $2, $3
	MFLO $2
	NOP
	NOP
	SW $2 , 0($sp)
	ADDI $sp, $sp, -4 
	LW $2, -8($fp)
	ADDI $sp, $sp, 4 
	LW $3, 0($sp)
	ADDU $2, $2, $3
	SW $2, -8($fp)
	LW $2, -8($fp)
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	LI $2, 0
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	JR $31
	NOP
	ADDI $sp, $sp, 4 #ending scope
	move	$sp,$fp
	lw	$fp,4($sp)
	addiu	$sp,$sp,8
	LI $2, 0
	JR  $31
	NOP
	.end f

