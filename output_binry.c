#include "main.h"

/**
 * output_binry - Outputs decimal in binary.
 * @args: the string.
 * @bffr: the buffer pointer.
 * @elem_bffr: index pointer.
 * Return: chars output.
 */
int output_binry(va_list args, char *bffr, unsigned int elem_bffr)
{
	int int_input, sum, x, num1, isnegative;
	char *binary;

	int_input = va_arg(args, int);
	isnegative = 0;
	if (int_input == 0)
	{
		elem_bffr = bffr_handle(bffr, '0', elem_bffr);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = stack_bin_arr(binary, int_input, isnegative, 32);
	num1 = 0;
	for (sum = x = 0; binary[x]; x++)
	{
		if (num1 == 0 && binary[x] == '1')
			num = 1;
		if (num1 == 1)
		{
			elem_bffr = bffr_handle(bffr, binary[x], elem_bffr);
			sum++;
		}
	}
	free(binary);
	return (sum);
}
