
INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_ERROR
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   ; verbose mode

   SECTION seg_code_error
   
   PUBLIC error_eoverflow_mc
   
   EXTERN __EOVERFLOW, errno_mc
   
      pop hl
   
   error_eoverflow_mc:
   
      ; set hl = -1
      ; set carry flag
      ; set errno = EOVERFLOW
      
      ld l,__EOVERFLOW
      jp errno_mc
   
   
   SECTION seg_rodata_error_strings
   
   defb __EOVERFLOW
   defm "EOVERFLOW - Value too large for data type"
   defb 0

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

   SECTION seg_code_error
   
   PUBLIC error_eoverflow_mc
   
   EXTERN errno_mc
   
   defc error_eoverflow_mc = errno_mc - 2

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
