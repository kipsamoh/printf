#include "main.h"

/**
 * print_string - string ouput
 * @list: arguments
 *
 * Return: size of string.
 */

int print_string(va_list list)
{
	char *p;
	int legth;

	p = va_arg(list, char*);
	length = print((p != NULL) ? p : "(null)");

	return (length);
}
