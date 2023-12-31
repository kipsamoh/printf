#include "main.h"

/**
 * print_integer - outputs num in decimal
 * @list: Num input
 *
 * Return: size of the num
 **/
int print_integer(va_list list)
{
	char *p_buff;
	int m;

	p_buff = itoa(va_arg(list, int), 10);

	m = print((p_buff != NULL) ? p_buff : "NULL");

	return (m);
}
