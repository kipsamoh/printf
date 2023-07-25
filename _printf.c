#include "main.h"

/**
 * _printf - puts to screen in a format
 * @format: string character in many forms
 *
 * Return: num of characters without null byte
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
