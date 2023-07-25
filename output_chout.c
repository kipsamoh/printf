#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - output num in base 16
 * @list: num input
 *
 * Return: size of the num
 **/
int print_pointer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buff, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!_strcmp(p_buff, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(p_buff);

	return (size);
}

/**
 * _strcmp - checks similarity btween 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}

	return (0);
}
