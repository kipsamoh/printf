#include "main.h"

/**
 * print_unsigned - outputs non negative num
 * @list: num input
 *
 * Return: num size
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int m;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	m = print((p_buff != NULL) ? p_buff : "NULL");

	return (m);
}
