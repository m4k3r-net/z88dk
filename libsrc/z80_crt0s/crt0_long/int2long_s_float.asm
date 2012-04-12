;       Small C+ Z88 Support Library
;
;       Convert signed int to long

                XLIB    l_int2long_s_float
                LIB		float

; If MSB of h sets de to 255, if not sets de=0

.l_int2long_s_float
        ld      de,0
        bit     7,h
        ret     z
        dec     de
        jp		float
