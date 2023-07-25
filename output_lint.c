#include "main.h"
/**
 * output_lint - prints a long integer
 * @args: input string
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed.
 */
int output_lint(va_list args, char *bffr, unsigned int elem_bffr)
{
	long int int_input;
	unsigned long int num, temp, x, div, is_negative;

	int_input = va_arg(args, long int);
	is_negative = 0;
	if (int_input < 0)
	{
		num = int_input * -1;
		elem_bffr = bffr_handle(bffr, '-', elem_bffr);
		is_negative = 1;
	}
	else
	{
		num = int_input;
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
	return (x + is_negative);
}
