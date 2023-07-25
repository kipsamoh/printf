#include "main.h"

/**
 * print_rev_string - outputs chars in reverse
 * @list: arguments
 *
 * Return: string size
 **/
int  print_rev_string(va_list list)
{
	int x, size;
	const char *str;

	str = va_arg(list, const char *);

	size = _strlen(str);

	for (x = size - 1; x >= 0; x--)
		_putchar(str[x]);

	return (size);
}
