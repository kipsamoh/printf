#include "main.h"
/**
 * stack_octal_arr - writes char z to screen
 *
 * @binry: binary storage for array.
 * @oct: octal storage for array.
 *
 * Return: binary array.
 */
char *stack_octal(char *binry, char *oct)
{
	int w, x, y, elem_oct, max;

	oct[11] = '\0';
	for (x = 31, elem_oct = 10; x >= 0; x--, elem_oct--)
	{
		if (x > 1)
			max = 4;
		else
			max = 2;
		for (w = 0, y = 1; y <= max; y *= 2, x--)
			w = ((binry[x] - '0') * y) + w;
		x++;
		oct[elem_oct] = w + '0';
	}
	return (oct);
}
