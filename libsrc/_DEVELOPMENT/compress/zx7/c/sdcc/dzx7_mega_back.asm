
; void dzx7_mega_back(void *src, void *dst)

SECTION code_clib
SECTION code_compress_zx7

PUBLIC _dzx7_mega_back

EXTERN asm_dzx7_mega_back

_dzx7_mega_back:

   pop af
   pop hl
   pop de

   push de
   push hl
   push af

   jp asm_dzx7_mega_back
