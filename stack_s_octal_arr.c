#include "main.h"

/**
 * stack_s_octal_arr - calculates a short octal number
 *
 * @binry: storage binary array
 * @oct: array stored in octal.
 *
 * Return: array of binary.
 */
char *stack_s_octal_arr(char *binry, char *oct)
{
	int w, x, y, elem_oct, max;

	oct[6] = '\0';
	for (x = 15, elem_oct = 5; x >= 0; x--, elem_oct--)
	{
		if (x > 0)
			max = 4;
		else
			max = 1;
		for (w = 0,y = 1; y <= max; y *= 2, x--)
			w = ((binry[x] - '0') * y) + w;
		x++;
		oct[elem_oct] = w + '0';
	}
	return (oct);
}
