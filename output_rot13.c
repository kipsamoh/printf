#include "main.h"

/**
 * rot13 - manipulates string to rot13 code.
 * @s: input string
 * Return: encoded string
 */
int rot13(char *s)
{
	int x, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (x = 0; s[x] != '\0'; x++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[x] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(s[x]);
	}
	return (x);
}

/**
 * print_rot - Prints the rot13'ed string
 * @list: String to encoded
 *
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char *);
	p_len = rot13((p != NULL) ? p : "(ahyy)");

	return (p_len);
}
