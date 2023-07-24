#include "main.h"

/**
 * _printf - outputs formated custom conversion.
 * @format: string input.
 *
 * Return: number of chars.
 */
int _printf(const char *format, ...)
{
	unsigned int x = 0, length = 0, elem_bffr = 0;
	va_list args;
	int (*func)(va_list, char *, unsigned int);
	char *place_holder;

	va_start(args, format), place_holder = malloc(sizeof(char) * 1024);
	if (!format || !place_holder || (format[x] == '%' && !format[x + 1]))
		return (-1);
	if (!format[x])
		return (0);
	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
			{	output_bffr(place_holder, elem_bffr), free(place_holder), va_end(args);
				return (-1);
			}
			else
			{	func = obtain_output_functions(format, x + 1);
				if (func == NULL)
				{
					if (format[x + 1] == ' ' && !format[x + 2])
						return (-1);
					bffr_handle(place_holder, format[x], elem_bffr), length++, x--;
				}
				else
				{
					length += func(args, place_holder, elem_bffr);
					x += hpr_output_functions(format, x + 1);
				}
			} x++;
		}
		else
			bffr_handle(place_holder, format[x], elem_bffr), length++;
		for (elem_bffr = length; elem_bffr > 1024; elem_bffr -= 1024)
			;
	}
	output_bffr(place_holder, elem_bffr), free(place_holder), va_end(args);
	return (length);
}
