
; int fseek_unlocked_callee(FILE *stream, long offset, int whence)

SECTION code_stdio

PUBLIC _fseek_unlocked_callee, l0_fseek_unlocked_callee

_fseek_unlocked_callee:

   pop af
   exx
   pop bc
   exx
   pop hl
   pop de
   pop bc
   push af

l0_fseek_unlocked_callee:

   exx
   push bc
   exx
   
   ex (sp),ix
   
   call asm_fseek_unlocked
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_fseek_unlocked.asm"
