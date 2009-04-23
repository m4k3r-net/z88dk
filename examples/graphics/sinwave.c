/*

	Z88DK base graphics libraries examples
	Simple 3D math function drawing using the Z-buffer algorithm
	
	The picture size is automatically adapted to the target display size
	
	to build:  zcc +<target> <stdio options> -lm -create-app sinwave.c
	
	Examples:
	  zcc +zx -lm -lndos -create-app sinwave.c
	  zcc +aquarius -lm -create-app sinwave.c
	
	$Id: sinwave.c,v 1.3 2009-04-23 10:16:21 stefano Exp $

*/

#include <graphics.h>
#include <stdio.h>
#include <math.h>

main()
{

float x,y,incr,yenlarge;
unsigned char z,buf;

	clg();
	incr=2.0/(float)getmaxx();
	yenlarge=(float)getmaxy() / 6.0;

	for (x=-3.0; x<0; x=x+incr)
	{
		buf=255;
		for (y=-3.0; y<3.0; y=y+0.2)
		{
			z = (unsigned char) (float)getmaxy() - (yenlarge * (y + 3.0) + ( yenlarge * sin (x*x + y*y) ));

			if (buf>z)
			{
				buf = z;
				plot ( (unsigned char) ((float)getmaxx() / 6.0 * (x + 3.0)), (unsigned char) z);
				plot ( (unsigned char) ((float)getmaxx() / 6.0 * (3.0 - x)), (unsigned char) z);
			}
		}
	}
	
	while (getk() != 13) {};
}

