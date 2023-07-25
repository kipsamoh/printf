#include "main.h"

/**
 * print_rev_string - outputs chars in reverse
 * @list: arguments
 *
 * Return: string size
 **/
int  print_rev_string(va_list list)
{
	int x, m;
	const char *str;

	str = va_arg(list, const char *);

	m = _strlen(str);

	for (x = m - 1; x >= 0; x--)
		_putchar(str[x]);

	return (m);
}
