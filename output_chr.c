#include "main.h"
#include <stdio.h>
/**
 * output_chr - writes the character z to screen
 * @args: input char
 * @bffr: buffer pointer
 * @elem_bffr: index pointer
 * Return: On success 1.
 */
int output_chr(va_list args, char *bffr, unsigned int elem_bffr)
{
	char z;

	z = va_arg(args, int);
	buffr_handle(bffr, z, elem_bffr);

	return (1);
}
