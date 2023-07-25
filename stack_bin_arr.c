#include "main.h"

/**
 * stack_bin_arr - outputs decimal into binary.
 * @bin: binary pointer.
 * @num: number input.
 * @is_negative: whether input is negative.
 * @max: binary size.
 * Return: num chars output.
 */
char *stack_bin_arr(char *bin, long int num, int is_negative, int max)
{
	int x;

	for (x = 0; x < max; x++)
		bin[x] = '0';
	bin[max] = '\0';
	for (x = max - 1; num > 1; x--)
	{
		if (num == 2)
			bin[x] = '0';
		else
			bin[x] = (num % 2) + '0';
		num /= 2;
	}
	if (num != 0)
		bin[x] = '1';
	if (is_negative)
	{
		for (x = 0; bin[x]; x++)
			if (bin[x] == '0')
				bin[x] = '1';
			else
				bin[x] = '0';
	}
	return (bin);
}
