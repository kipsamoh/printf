#include "main.h"

/**
 * output_reverse - writes the str in reverse
 * @args: input string
 * @bffr: buffer pointer
 * @elem_bffr: index for buffer pointer
 * Return: number of chars printed.
 */
int output_reverse(va_list args, char *bffr, unsigned int elem_bffr)
{
	char *string;
	unsigned int x;
	int y = 0;
	char empty[] = "(llun)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (x = 0; empty[x]; x++)
			elem_bffr = bffr_handle(bffr, empty[x], elem_bffr);
		return (6);
	}
	for (x = 0; string[x]; x++)
		;
	y = x - 1;
	for (; y >= 0; y--)
	{
		elem_bffr = bffr_handle(bffr, string[y], elem_bffr);
	}
	return (x);
}
