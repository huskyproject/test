default:
	-cd . | gcc -E -dM - | more
	echo Call 'wmake watcom-os2' for OS/2 watcom build
	echo Call 'make cygwin' for cygwin

watcom_os2: .SYMBOLIC
	wcl386 -zq -wx -bt=os2v2 -oneatx -5 -fpi87  -l=os2v2  compiler.c
	compiler

cygwin:
	gcc compiler.c -ocompiler
	./compiler
