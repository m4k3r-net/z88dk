
; size_t getdelim_unlocked_callee(char **lineptr, size_t *n, int delimiter, FILE *stream)

SECTION code_stdio

PUBLIC _getdelim_unlocked_callee

_getdelim_unlocked_callee:

   pop af
   pop hl
   pop de
   pop bc
   pop ix
   push af

   INCLUDE "stdio/z80/asm_getdelim_unlocked.asm"
