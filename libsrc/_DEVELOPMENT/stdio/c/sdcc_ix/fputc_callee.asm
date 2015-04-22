
; int fputc_callee(int c, FILE *stream)

INCLUDE "clib_cfg.asm"

SECTION code_stdio

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD & $02
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _fputc_callee, l0_fputc_callee

_fputc_callee:

   pop af
   pop de
   pop bc
   push af

l0_fputc_callee:

   push bc
   ex (sp),ix
   
   call asm_fputc
   
   pop ix
   ret
   
   INCLUDE "stdio/z80/asm_fputc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

PUBLIC _fputc_callee

EXTERN _fputc_unlocked_callee

defc _fputc_callee = _fputc_unlocked_callee
   
INCLUDE "stdio/z80/asm_fputc.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
