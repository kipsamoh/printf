#include "main.h"
/**
 * output_hoct - prints long decimal number in octal
 * @args: input number
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed.
 */
int output_hoct(va_list args, char *bffr, unsigned int elem_bffr)
{
	short int int_input, x, isnegative, sum, digit_1;
	char *oct_al, *binary;

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
	oct_al = malloc(sizeof(char) * (6 + 1));
	oct_al = stack_octal_arr(binary, oct_al);
	for (digit_1 = x = sum = 0; oct_al[x]; x++)
	{
		if (oct_al[x] != '0' && digit_1 == 0)
			digit_1 = 1;
		if (digit_1)
		{
		elem_bffr = bffr_handle(bffr, oct_al[x], elem_bffr);
			sum++;
		}
	}
	free(binary);
	free(oct_al);
	return (sum);
}
