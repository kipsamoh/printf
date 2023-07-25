#include "main.h"
/**
 * output_loct - prints long decimal number in octal
 * @args: input number
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed.
 */
int output_loct(va_list args, char *bffr, unsigned int elem_bffr)
{
	long int int_input, x, isnegative, sum, digit_1;
	char *oct_al, *binary;

	int_input = va_arg(args, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = stack_bin_arr(binary, int_input, isnegative, 64);
	oct_al = malloc(sizeof(char) * (22 + 1));
	oct_al = stack_l_octal_arr(binary, oct_al);
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
