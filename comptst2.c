/* Small code for test compiler directives and modifiers on compile time.
 *
 */

#pragma message("Test for near")
char * near ident="$Id$";

#pragma message("Test for far")
char * far r="$Revision$";

#pragma message("Test for huge")
char huge c[];

#pragma message("Test for cdecl")
char* cdecl a(){return "$Autor";}

#pragma message("Test for pascal")
char* pascal d(){ return "$Date$";}

#pragma message("Test for fortran")
char fortran x(){ return 1;}

#pragma message("Test for interrupt handler")
int interrupt i1();
void interrupt i2();
cdecl interrupt i3();
