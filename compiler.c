static char *ident(){ return "$Id$"; }

/* Test compiler for predefined macroses
 stdc
 */

char *string = ""

/*
#ifdef
"  "
#endif
*/

#ifdef MSDOS
 " MSDOS "
#endif

#ifdef __MSDOS__
" __MSDOS__ "
#endif

#ifdef DOS
" DOS "
#endif

#ifdef _DOS
" _DOS "
#endif

#ifdef __DOS__
" __DOS__ "
#endif

#ifdef __DJGPP__
" __DJGPP__ "
#endif

#ifdef __DOS4G__
" __DOS4G__ "
#endif

#ifdef __NT__
" __NT__ "
#endif

#ifdef _NT
" _NT "
#endif

#ifdef __WINNT__
" __WINNT__ "
#endif

#ifdef WINNT
" WINNT "
#endif

#ifdef _WIN_NT
" _WIN_NT "
#endif

#ifdef _WINNT
" _WINNT "
#endif

#ifdef _WIN32_WINNT
" _WIN32_WINNT "
#endif

#ifdef __WIN32__
" __WIN32__ "
#endif

#ifdef WIN32
" WIN32 "
#endif

#ifdef _WIN32
" _WIN32 "
#endif

#ifdef __WIN__
" __WIN__ "
#endif

#ifdef WIN
" WIN "
#endif

#ifdef _WIN
" _WIN "
#endif

#ifdef WINDOWS
" WINDOWS "
#endif

#ifdef _WINDOWS
" _WINDOWS "
#endif

#ifdef __WINDOWS__
" __WINDOWS__ "
#endif

#ifdef OS2
" OS2 "
#endif

#ifdef _OS2
" _OS2 "
#endif

#ifdef __OS2__
" __OS2__ "
#endif

#ifdef __OS2V2__
" __OS2V2__ "
#endif

#ifdef __X86__
" __X86__ "
#endif

#ifdef __I86__
" __I86__ "
#endif

#ifdef __86__
" __86__ "
#endif

#ifdef __186__
" __186__ "
#endif

#ifdef __286__
" __286__ "
#endif

#ifdef __386__
" __386__ "
#endif

#ifdef __486__
" __486__ "
#endif

#ifdef __586__
" __586__ "
#endif

#ifdef __686__
" __686__ "
#endif

#ifdef M_X86
" M_X86 "
#endif

#ifdef _M_X86
" _M_X86 "
#endif

#ifdef M_86
" M_86 "
#endif

#ifdef _M_86
" _M_86 "
#endif

#ifdef _M_I86
" _M_I86 "
#endif

#ifdef M_I86
" M_I86 "
#endif

#ifdef _M_I8086
" _M_I8086 "
#endif

#ifdef M_I8086
" M_I8086 "
#endif

#ifdef _M_I8088
" _M_I8088 "
#endif

#ifdef M_I8088
" M_I8088 "
#endif

#ifdef M_186
" M_186 "
#endif

#ifdef _M_186
" _M_186 "
#endif

#ifdef M_286
" M_286 "
#endif

#ifdef _M_286
" _M_286 "
#endif

#ifdef M_386
" M_386 "
#endif

#ifdef _M_386
" _M_386 "
#endif

#ifdef _M_486
" _M_486 "
#endif

#ifdef M_486
" M_486 "
#endif

#ifdef M_586
" M_586 "
#endif

#ifdef _M_586
" _M_586 "
#endif

#ifdef _M_686
" _M_686 "
#endif

#ifdef M_686
" M_686 "
#endif

#ifdef _M_ALPHA
" _M_ALPHA "
#endif

#ifdef M_ALPHA
" M_ALPHA "
#endif

#ifdef __ALPHA__
" __ALPHA__ "
#endif

#ifdef __FLAT__
" __FLAT__ "
#endif

#ifdef __WATCOMC__
" __WATCOMC__ "
#endif

#ifdef __TURBOC__
" __TURBOC__ "
#endif

#ifdef __SUN__
" __SUN__ "
#endif

#ifdef SUN
" SUN "
#endif

#ifdef __sun__
" __sun__ "
#endif

#ifdef sun
" sun "
#endif

#if defined(__AIX__)
" __AIX__ "
#endif

#if defined(_AIX)
" _AIX "
#endif

#if defined(__APPLE__)
" __APPLE__ "
#endif
#if defined(__MACH__)
" __MACH__ "
#endif
#if defined(__NetBSD__)
" __NetBSD__ "
#endif
#if defined(__FreeBSD__)
" __FreeBSD__ "
#endif
#if defined(__OpenBSD__)
" __OpenBSD__ "
#endif

#if defined(BSD)
" BSD "
#endif
#if defined(__BSD__)
" __BSD__ "
#endif
#if defined(bsd)
" bsd "
#endif
#if defined(__bsd__)
" __bsd__ "
#endif
#if defined( __svr4__ )
" __svr4__ "
#endif
#if defined( svr4 )
" svr4 "
#endif
#if defined( __SVR4__ )
" __SVR4__ "
#endif
#if defined( SVR4 )
" SVR4 "
#endif
#if defined( __SVR4 )
" __SVR4 "
#endif
#if defined( _SVR4 )
" _SVR4 "
#endif
#if defined(__linux__)
" __linux__ "
#endif
#if defined(_linux)
" _linux "
#endif
#if defined(linux)
" linux "
#endif
#if defined(__LINUX__)
" __LINUX__ "
#endif
#if defined(_LINUX)
" _LINUX "
#endif
#if defined(LINUX)
" LINUX "
#endif

#ifdef __unix__
" __unix__ "
#endif

#ifdef _unix
 " _unix "
#endif

#ifdef unix
 " unix "
#endif

#ifdef __UNIX__
" __UNIX__ "
#endif

#ifdef _UNIX
 " _UNIX "
#endif

#ifdef UNIX
 " UNIX "
#endif

#ifdef __CYGWIN__
 "  __CYGWIN__ "
#endif

#ifdef __MINGW32__
 "  __MINGW32__ "
#endif

#ifdef __GNUC__
 " __GNUC__ "
#endif

#ifdef __GNUG__
 " __GNUG__ "
#endif

#ifdef __RSX__
" __RSX__ "
#endif

#ifdef __RSXNT__
" __RSXNT__ "
#endif

#ifdef __EMX__
" __EMX__ "
#endif

#ifdef __16BIT__
" __16BIT__ "
#endif

#ifdef __32BIT__
" __32BIT__ "
#endif

#ifdef __MT__    /* Multi-thread library */
" __MT__ "
#endif

#ifdef _QC
" _QC "
#endif

#ifdef _MSC
 " _MSC "
#endif

#ifdef _MSC_VER
 " _MSC_VER "
#endif

#ifdef __cplusplus
 " __cplusplus "
#endif

#ifdef _DLL
 " _DLL "
#endif

#ifdef _M_ALPHA
 " _M_ALPHA "
#endif

#ifdef _M_IX86
 " _M_IX86 "
#endif

#ifdef _M_MPPC
 " _M_MPPC "
#endif

#ifdef _M_MRX000
 " _M_MRX000 "
#endif

#ifdef _M_PPC
 " _M_PPC "
#endif

#ifdef __STDC__
 " __STDC__ "
#endif

#ifdef __CHAR_UNSIGNED__
 " __CHAR_UNSIGNED__ "
#endif

#ifdef _CHAR_UNSIGNED
 " _CHAR_UNSIGNED "
#endif

#ifdef _CHAR_UNSIGNED
 " _CHAR_UNSIGNED "
#endif

#ifdef CHAR_SIGNED
 " CHAR_SIGNED "
#endif

#ifdef _CHAR_SIGNED
 " _CHAR_SIGNED "
#endif

#ifdef __CHAR_SIGNED__
 " __CHAR_SIGNED__ "
#endif

#ifdef HIGHC
" HIGHC "
#endif

#ifdef __HIGHC__
" __HIGHC__ "
#endif

#ifdef near
" near "
#endif

#ifdef far
" far "
#endif

#ifdef huge
" huge "
#endif

#ifdef pascal
" pascal "
#endif

#ifdef fortran
" fortran "
#endif

#ifdef cdecl
" cdecl "
#endif

;

#include <stdio.h>

int main(){

puts("Compiler predefined macroses test for HUSKY.\n (c) Stas Degteff & Husky Development Team\n\n");

printf( "\nKnown predefined macroses list: \n%s\n\nSome values:\n" , string);


#ifdef __GNUC__
printf( "__GNUC__=%u (0x%X); ",__GNUC__, __GNUC__ );
#endif
#ifdef __GNUC_MINOR__
printf( "__GNUC_MINOR__=%u (0x%X) ", __GNUC_MINOR__, __GNUC_MINOR__);
#endif
#if defined(__GNUC__) || defined(__CNUC_MINOR__)
printf( "\n");
#endif

#ifdef __VERSION__
printf( "__VERSION__=%s\n", __VERSION__ );
#endif

#ifdef __TURBOC__
printf( "__TURBOC__=%u (0x%X)\n",__TURBOC__, __TURBOC__);
#endif

#ifdef __WATCOMC__
printf( "__WATCOMC__=%u (0x%X)\n",__WATCOMC__, __WATCOMC__);
#endif

#ifdef _MSC
printf( "_MSC=%u (0x%X) ",_MSC, _MSC);
#endif
#ifdef _MSC_VER
printf( "_MSC_VER=%u (0x%X) ",_MSC_VER, _MSC_VER);
#endif
#ifdef MSC_CMD_FLAGS
printf( "MSC_CMD_FLAGS=\"%s\" ", MSC_CMD_FLAGS);
#endif
#if defined(_MSC) || defined(_MSC_VER)
printf( "\n");
#endif

#ifdef NO_EXT_KEYS
printf( "NO_EXT_KEYS=%u\n", NO_EXT_KEYS);
#endif

#ifdef __STDC__
printf( "__STDC__=%u (0x%X); ", __STDC__, __STDC__);
#endif
#ifdef __STDC_VERSION__
printf( "__STDC_VERSION__=%u (0x%X); ", __STDC_VERSION__, __STDC_VERSION__);
#endif
#if defined(__STDC__) || defined(__STDC_VERSION__) || defined(__STDC_VERSION__)
printf( "\n");
#endif

printf( "\nVariable types sizes (in bytes):\n" );
printf( "char=%u; short=%u; int=%u; long=%u\n",
        (unsigned) sizeof(char),
        (unsigned) sizeof(short),
        (unsigned) sizeof(int),
        (unsigned) sizeof(long)
      );

return 0;
}
