watcom_os2: .SYMBOLIC
	wcl386 -zq -wx -bt=os2v2 -oneatx -5 -fpi87  -l=os2v2  compiler.c
	compiler

cygwin:
	gcc compiler.c -ocompiler
	./compiler
