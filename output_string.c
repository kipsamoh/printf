#include "main.h"

/**
 * output_string - output string to screen
 * @args: string
 * @bffr: pointer buffer
 * @elem_bffr: index buffer ptr
 * Return: On success 1.
 */
int output_string(va_list args, char *bffr, unsigned int elem_bffr)
{
	char *string;
	unsigned int x;
	char empty[] = "(null)";

	string = va_arg(args, char *);
	if (string == NULL)
	{
		for (x = 0; empty[x]; x++)
			elem_bffr = bffr_handle(bffr, empty[x], elem_bffr);
		return (6);
	}
	for (x = 0; string[x]; x++)
		elem_bffr = bffr_handle(bffr, string[x], elem_bffr);
	return (x);
}
