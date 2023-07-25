#include "main.h"
#include <stdio.h>

/**
 * output_chout - writes char z to screen
 * @a: the input char.
 * @bffr: the pointer for buffer.
 * @x: the index for buffer.
 * Return: On success 1.
 */
int output_chout(va_list a __attribute__((unused)), char *bffr, unsigned int x)
{
	bffe_handle(bffr, '%', x);

	return (1);
}
