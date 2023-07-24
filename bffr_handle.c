#include "main.h"

/**
 * bffr_handle - buffer char concatenation.
 * @bffr: pointer to buffer
 * @z: char to be concatenated
 * @elem_bffr: elements of buffer pointer
 * Return: elements pointers.
 */
unsigned int bffr_handle(char *bffr, char z, unsigned int elem_bffr)
{
	if (elem_bffr == 1024)
	{
		output_bffr(bffr, elem_bffr);
		elem_bffr = 0;
	}
	bffr[elem_bffr] = z;
	elem_bffr++;
	return (elem_bffr);
}
