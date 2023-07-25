#include "main.h"
/**
 * output_unt - prints an unsigned int
 * @args: number to print
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed.
 */
int output_unt(va_list args, char *bffr, unsigned int elem_bffr)
{
	unsigned int num, temp, x, div;

	num = va_arg(args, unsigned int);
	temp = num;
	div = 1;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (x = 0; div > 0; div /= 10, x++)
	{
		elem_bffr = bffr_handle(bffr, ((num / div) % 10) + '0', elem_bffr);
	}
	return (x);
}
