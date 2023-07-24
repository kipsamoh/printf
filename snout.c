#include "main.h"
/**
 * output_snout - prints a string and values of
 * non-printed chars
 * @args: input string
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed
 */
int output_snout(va_list args, char *bffr, unsigned int elem_bffr)
{
	unsigned char *string;
	char *hexadecimal, *binary;
	unsigned int x, s_um, w;

	string = va_arg(args, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (s_um = x = 0; string[x]; x++)
	{
		if (string[x] < 32 || string[x] >= 127)
		{
			elem_bffr = bffr_handle(bffr, '\\', elem_bffr);
			elem_bffr = buffr_handle(bffr, 'x', elem_bffr);
			w = string[x];
			binary = stack_bin_arr(binary, w, 0, 32);
			hexadecimal = stack_bin_arr(binary, hexadecimal, 1, 8);
			elem_bffr = bffr_handle(bffr, hexadecimal[6], elem_bffr);
			elem_bffr = bffr_handle(bffr, hexadecimal[7], elem_bffr);
			s_um += 3;
		}
		else
			elem_bffr = bffr_handle(bffr, string[x], elem_bffr);
	}
	free(binary);
	free(hexadecimal);
	return (x + s_um);
}
