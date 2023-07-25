#include "main.h"
/**
 * output_sint - prints int begining with space
 * @args: input string
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed
 */
int output_sint(va_list args, char *bffr, unsigned int elem_bffr)
{
	int int_input;
	unsigned int num, temp, x, div;

	int_input = va_arg(args, int);
	if (int_input < 0)
	{
		num = int_input * -1;
		elem_bffr = bffr_handle(bffr, '-', elem_bffr);
	}
	else
	{
		num = int_input;
		elem_bffr = bffr_handle(bffr, ' ', elem_bffr);
	}
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
	return (x + 1);
}
