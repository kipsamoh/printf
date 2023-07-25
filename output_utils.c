#include "main.h"


/**
 * _strlen - checks for string size
 * @str: input string
 *
 * Return: size
 **/
int _strlen(const char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
		;

	return (x);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; ++x)
		_putchar(str[x]);

	return (x);
}
