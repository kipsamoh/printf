#include "main.h"
/**
 * print_char - outputs characters
 * @list: arguments.
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int out;

	out = va_arg(list, int);

	_putchar(out);

	return (1);
}
