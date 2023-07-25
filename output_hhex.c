#include "main.h"
/**
 * output_hhex - prints a short decimal in hexadecimal
 * @args: input string
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed
 */
int output_hhex(va_list args, char *bffr, unsigned int elem_bffr)
{
	short int int_input, x, isnegative, sum, digit_1;
	char *hexadecimal, *binary;

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

	binary = malloc(sizeof(char) * (16 + 1));
	binary = stack_bin_arr(binary, int_input, isnegative, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = stack_hexadec_arr(binary, hexadecimal, 0, 4);
	for (digit_1 = x = sum = 0; hexadecimal[x]; x++)
	{
		if (hexadecimal[x] != '0' && digit_1 == 0)
			digit_1 = 1;
		if (digit_1)
		{
			elem_bffr = bffr_handle(bffr, hexadecimal[x], elem_bff);
			sum++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (sum);
}
