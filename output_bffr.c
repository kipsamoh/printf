#include "main.h"

/**
 * output_bffr - Outputs buffer
 * @bffr: the buffer pointer
 * @n_bffr: the bytes to output
 * Return:  the bytes output.
 */
int output_bffr(char *bffr, unsigned int n_bffr)
{
	return (write(1, bffr, n_bffr));
}
