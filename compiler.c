static char *ident = "$Id$";

/* Test compiler for predefined macroses
 */

char *string = ""

#ifdef MSDOS
 " MSDOS "
#endif

#ifdef __MSDOS__
" __MSDOS__ "
#endif

#ifdef DOS
" DOS "
#endif

#ifdef __DOS__
" __DOS__ "
#endif

#ifdef __OS2__
" __OS2__ "
#endif

#ifdef __OS2V2__
" __OS2V2__ "
#endif

#ifdef __386__
" __386__ "
#endif

#ifdef __FLAT__
" __FLAT__ "
#endif

#ifdef __WATCOMC__
" __WATCOMC__ "
#endif

#ifdef __UNIX__
" __UNIX__ "
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

#ifdef _MSC
 " _MSC "
#endif
#ifdef _MSC_VER
 " _MSC_VER "
#endif

#ifdef __STDC__
 " __STDC__ "
#endif

#ifdef __CHAR_UNSIGNED__
 " __CHAR_UNSIGNED__ "
#endif

#ifdef __CHAR_SIGNED__
 " __CHAR_SIGNED__ "
#endif

;
#include <stdio.h>

int main(){

puts("Compiler predefined macroses test for HUSKY. (c) Stas Degteff & Husky Development Team\n\n");

printf( "\nKnown predefined macroses list: \n%s\nSome values:\n" , string);

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
printf( "_MSC=%u (0x%X); ",_MSC, _MSC);
#endif
#ifdef _MSC_VER
printf( "_MSC_VER=%u (0x%X)",_MSC_VER, _MSC_VER);
#endif
#if defined(_MSC) || defined(_MSC_VER)
printf( "\n");
#endif

#ifdef __STDC__
printf( "__STDC__=%u (0x%X); ", __STDC__, __STDC__);
#endif
#ifdef __STDC_VERSION__
printf( "__STDC_VERSION__=%u (0x%X); ", __STDC_VERSION__, __STDC_VERSION__);
#endif
#if defined(__STDC_VERSION__) || defined(__STDC_VERSION__)
printf( "\n");
#endif


return 0;
}
