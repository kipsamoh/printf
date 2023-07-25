#include "main.h"

/**
 * print_hexadecimal_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int m;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	m = print((p_buff != NULL) ? p_buff : "NULL");

	return (m);
}
