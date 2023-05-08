#include "main.h"
#include <stdio.h>

/**
 *_abs  - check the code
 *@r:an integer input 
 *Return: Always 0. 
 */

int _abs(int r)
{
	if (r < 0)
		r = r * -1;
	return(r);
}
