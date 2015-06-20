
; =============================================================
; May 2015
; =============================================================
;
; size_t dtoh(double x, char *buf, uint16_t prec, uint16_t flag)
;
; (-0xh.hhhp+d)
;
; Write zero-terminated floating point number to buffer and
; return number of characters written not including '\0'
;
; If buf == 0, number of chars returned not incl '\0'
; If prec >= 255, prec set to max number of significant digits
;
; =============================================================

SECTION code_stdlib

PUBLIC asm_dtoh

EXTERN __dtoh__, __dtoa_asm_exit

asm_dtoh:

   ; enter :  c = flag (bit 6='+', bit 5=' ', bit 4='#')
   ;         de = precision (clipped at 255)
   ;         hl = char *buf (0 = no write to buffer)
   ;         AC'= double x
   ;
   ; exit  : hl = number of characters written not incl '\0'
   ;         de = char *buf
   ;
   ; uses  : af, bc, de, hl, ix, af', bc', de', hl'

   ld a,c

   ld c,l
   ld b,h
   
   ld hl,-32
   add hl,sp
   ld sp,hl                    ; create 32 bytes of workspace
   
   push bc                     ; save buf
   
   ld c,a
   call __dtoh__

   ;            bc = buffer length
   ;            de = buffer *
   ;        (IX-6) = flags, bit 7 = 'N', bit 4 = '#', bit 0 = precision==0
   ;        (IX-5) = tz (number of zeroes to append)
   ;        (IX-4) = fz (number of zeroes to insert after .)
   ;        (IX-3) = iz (number of zeroes to insert before .)
   ;        (IX-2) = ignore
   ;        (IX-1) = '0' marks start of buffer
   ;
   ;         if carry set, special form just output buffer with sign
   ;
   ;            stack = char *buf

   jp __dtoa_asm_exit
