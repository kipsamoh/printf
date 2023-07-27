#include "main.h"

/**
 * handler - format specifier
 * @str: String.
 * @list: arguments
 *
 * Return: arguments with pointer to string
 **/
int handler(const char *str, va_list list)
{
	int m, x, out;

	m = 0;
	for (x = 0; str[x] != 0; x++)
	{
		if (str[x] == '%')
		{
			out = percent_handler(str, list, &x);
			if (out == -1)
				return (-1);

			m += out;
			continue;
		}

		_putchar(str[x]);
		m = m + 1;
	}


	return (m);
}

/**
 * percent_handler - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @x: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *x)
{
	int m, y, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot13}
	};

	*x = *x + 1;

	if (str[*x] == '\0')
		return (-1);

	if (str[*x] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (m = y = 0; y < number_formats; y++)
	{
		if (str[*x] == formats[y].type)
		{
			m = formats[y].f(list);
			return (m);
		}

	}

	_putchar('%'), _putchar(str[*x]);

	return (2);
}
