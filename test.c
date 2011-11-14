/*
$Id$
   $Revision$
   $Date$
   $Author$

Test  endian (little endian or big endian)
*/

#include <stdio.h>
#include <string.h>

main(){
 unsigned int ival=0x04030201;
 char sval[5]="";
 memcpy(sval,&ival,4);
 printf("Endian test: integer %08X(hex), bytes: 1:%c 2:%c 3:%c 4:%c\n", ival, sval[0]+'0', sval[1]+'0', sval[2]+'0', sval[3]+'0' );
 return (int)ival;
}
