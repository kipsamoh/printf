#include "main.h"
/**
 * print_char - outputs characters.
 * @list: list of arguments
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
