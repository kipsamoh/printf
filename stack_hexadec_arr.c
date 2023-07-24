#include "holberton.h"
/**
 * stack_hexadec_arr - writes character z to screen
 * @binry: binary storage array.
 * @hexadec: hexadecimal storage array.
 * @is_upper: int checking if hexadecimal is in caps
 * or in lowercase letters
 * @max: hexadec size
 * Return: array binary.
 */
char *stack_hexadec(char *binry, char *hexadec, int is_upper, int max)
{
	int w, x, y, lett;

	hexadec[max] = '\0';
	if (is_upper)
		lett = 55;
	else
		lett = 87;
	for (x = (max * 4) - 1; x >= 0; x--)
	{
		for (w = 0, y = 1; y <= 8; y *= 2, x--)
			w = ((binry[x] - '0') * y) + w;
		x++;
		if (w < 10)
			hexadec[x / 4] = w + 48;
		else
			hexadec[x / 4] = w + lett;
	}
	return (hexadec);
}
