#include "main.h"

/**
 * output_bffr - outputs buffer
 * @bffr: buffer pointer
 * @n_bffr: bytes to output
 * Return:  bytes output.
 */
int output_bffr(char *bffr, unsigned int n_bffr)
{
	return (write(1, bffr, n_bffr));
}
