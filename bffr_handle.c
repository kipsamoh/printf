#include "main.h"

/**
 * handler - format specifier
 * @str: String 
 * @list: arguments
 *
 * Return: arguments with pointer to string
 **/
int handler(const char *str, va_list list)
{
	int size, x, aux;

	size = 0;
	for (x = 0; str[x] != 0; x++)
	{
		if (str[x] == '%')
		{
			aux = percent_handler(str, list, &x);
			if (aux == -1)
				return (-1);

			size += aux;
			continue;
		}

		_putchar(str[x]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handler - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *x)
{
	int size, j, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
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
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*x] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*x]);

	return (2);
}
