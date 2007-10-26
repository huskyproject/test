default:
	-cd . | gcc -E -dM - | more
	-echo Call 'wmake watcom-os2' for OS/2 watcom build
	-echo Call 'make cygwin' for cygwin
	-echo Call 'make mingw' for mingw32 and cygwin "gcc -mno-cygwin"
	-echo Call 'make djgpp' for djgpp

djgpp:
	gcc compiler.c -ocompiler.exe
	compiler

watcom_os2: .SYMBOLIC
	wcl386 -zq -wx -bt=os2v2 -oneatx -5 -fpi87  -l=os2v2  compiler.c
	compiler

cygwin:
	gcc compiler.c -ocompiler
	./compiler

mingw:
	gcc -mno-cygwin compiler.c -ocompiler
	./compiler
