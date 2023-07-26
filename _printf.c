#include "main.h"

/**
 * _printf - output formatter
 * @format: char input
 *
 * Return: chars
 **/
int _printf(const char *format, ...)
{
	int m;
	va_list args;

	if (format == NULL)
		return (-1);

	m = _strlen(format);
	if (m <= 0)
		return (0);

	va_start(args, format);
	m = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (m);
}
