#include "main.h"

/**
 * output_unt - outputs unsigned int.
 * @args: number output.
 * @bffr: buffer pointer.
 * @elem_bffr: index pointer.
 * Return: chars ouput.
 */
int output_unt(va_list args, char *bffr, unsigned int elem_bffr)
{	
	(void)elem_bffr;
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
		 bffr_handle(bffr, ((num / div) % 10) + '0', num);
	}
	return (x);
}
