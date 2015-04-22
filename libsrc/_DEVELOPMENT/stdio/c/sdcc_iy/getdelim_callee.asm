
; size_t getdelim_callee(char **lineptr, size_t *n, int delimiter, FILE *stream)

INCLUDE "clib_cfg.asm"

SECTION code_stdio

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _getdelim_callee

_getdelim_callee:

   pop af
   pop hl
   pop de
   pop bc
   pop ix
   push af

   INCLUDE "stdio/z80/asm_getdelim.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _getdelim_callee

EXTERN _getdelim_unlocked_callee

defc _getdelim_callee = _getdelim_unlocked_callee
   
INCLUDE "stdio/z80/asm_getdelim.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
