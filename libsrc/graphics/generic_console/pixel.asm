
	INCLUDE	"graphics/grafix.inc"

	EXTERN	generic_console_printc
	EXTERN	generic_console_plotc
	EXTERN	generic_console_vpeek
	EXTERN	generic_console_pointxy
	EXTERN	textpixl
	EXTERN	__console_w
	EXTERN	__console_h


		ld	a,(__console_w)
		add	a
		dec	a
		cp	h
		ret	c

		ld	a,(__console_h)
		add	a
		dec	a
		cp	l
		ret	c

		push	bc		;save entry bc	
		ld	c,h
		ld	b,l
		srl	b
		srl	c
		push	bc		;save reduced cooardinates
		push	hl		;save original coordinates
IF USEplotc
		call	generic_console_pointxy
ELSE
		ld	e,1		;raw mode
		call	generic_console_vpeek
ENDIF
		ld	e,a

		ld	hl,textpixl
		ld	e,0
		ld	b,16
.ckmap		cp	(hl)
		jr	z,chfound
		inc	hl
		inc	e
		djnz	ckmap
		ld	e,0
.chfound	ld	b,e

		pop	hl		;original coordinates

		ld	a,1		; the bit we want to draw
			
		bit	0,h
		jr	z,iseven
		add	a,a		; move right the bit

.iseven
		bit	0,l
		jr	z,evenrow
		add	a,a
		add	a,a		; move down the bit
.evenrow
IF NEEDplot
		or	b
ENDIF
IF NEEDunplot
		cpl
		and	b
ENDIF
IF NEEDxor
		xor	b
ENDIF
IF NEEDpoint
		and	b
		pop	bc
ELSE
		ld	hl,textpixl
		ld	d,0
		ld	e,a
		add	hl,de
		ld	a,(hl)
		pop	bc		;reduced coordinates
IF USEplotc
		ld	d,a
                ld      e,0             ;pixel4 mode
                call    generic_console_plotc
ELSE
		ld	d,a
		ld	e,1		;raw mode
		call	generic_console_printc
ENDIF
ENDIF
		pop	bc
		ret
