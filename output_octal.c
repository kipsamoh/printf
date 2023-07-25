#include "main.h"

/**
 * print_octal - outputs num in base 8.
 * @list: Num input
 *
 * Return: num size
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
