#include "main.h"

/**
 * _putchar - outputs char to screen
 * @c: char to output
 *
 * Return: On success 1.
 * when an error -1.
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 *
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024];
	static int x;

	if (c == -1 || x == 1024)
	{
		write(1, buffering, x);
		x = 0;
	}

	if (c != -1)
		buffering[x++] = c;

	return (1);
}
