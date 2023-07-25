#include "main.h"

/**
 * print_binary - outputs numbers in 0s and 1s
 * @list: Num to output
 *
 * Return: size of the num in bytes
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
