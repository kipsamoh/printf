#include "main.h"
#include <stdio.h>

/**
 * output_addr - prints the address of an input variable.
 * @args: input address.
 * @bffr: buffer pointer.
 * @elem_bffr: index for buffer pointer.
 *
 * Return: number of chars printed.
 */
int output_addr(va_list args, char *bffr, unsigned int elem_bffr)
{
	void *add;
	long int int_input;
	int x, sum, digit_1, isnegative;
	char *hexadecimal, *binary;
	char empty[] = "(nil)";

	add = (va_arg(args, void *));
	if (add == NULL)
	{
		for (x = 0; empty[x]; x++)
			elem_bffr = bffr_handle(bffr, empty[x], elem_bffr);
		return (5);
	}
	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = stack_bin_arr(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = stack_hexadec_arr(binary, hexadecimal, 0, 16);
	elem_bffr = bffr_handle(bffr, '0', elem_bffr);
	elem_bffr = bffr_handle(bffr, 'x', elem_bffr);
	for (digit_1 = x = sum = 0; hexadecimal[x]; x++)
	{
		if (hexadecimal[x] != '0' && digit_1 == 0)
			digit_1 = 1;
		if (digit_1)
		{
			elem_bffr = bffr_handle(bffr, hexadecimal[x], elem_bffr);
			sum++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (sum + 2);
}
