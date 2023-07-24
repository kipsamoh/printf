#include "main.h"
/**
 * hpr_output_functions - returns number of specifiers.
 * @ch: argument specifier
 * @element: position of args specifier.
 * Return: number of specifiers.
 */
int hpr_output_functions(const char *ch, int element)
{
	output_t opa[] = {
		{"c", output_chr}, {"s", output_string}, {"i", output_int},
		{"d", output_int}, {"b", output_binry}, {"u", output_unt},
		{"o", output_octal}, {"x", output_hexadec}, {"X", output_sdhexadec},
		{"S", output_snout}, {"p", output_addr}, {"li", output_lint},
		{"ld", output_lint}, {"lu", output_lunt}, {"lo", output_loct},
		{"lx", output_lhex}, {"lX", output_lupx}, {"hi", output_hint},
		{"hd", output_hint}, {"hu", output_hunt}, {"ho", output_hoct},
		{"hx", output_hhex}, {"hX", output_hupx}, {"#o", output_noct},
		{"#x", output_nhex}, {"#X", output_nupx}, {"#i", output_int},
		{"#d", output_int}, {"#u", output_unt}, {"+i", output_pint},
		{"+d", output_pint}, {"+u", output_unt}, {"+o", output_octal},
		{"+x", output_hexadec}, {"+X", output_sdhexadec}, {" i", output_sint},
		{" d", output_int}, {" u", output_unt}, {" o", output_octal},
		{" x", output_hexadec}, {" X", output_sdhexadec}, {"R", output_rot13},
		{"r", output_reverse}, {"%", output_chout}, {"l", output_chout},
		{"h", output_chout}, {" +i", output_pint}, {" +d", output_pint},
		{"+ i", output_pint}, {"+ d", output_pint}, {" %", output_chout},
		{NULL, NULL},
	};
	int x = 0, y = 0, elemen_0;

	elemen_0  = element;
	while (opa[x].frmt_type)
	{
		if (ch[element] == opa[x].frmt_type[y])
		{
			if (opa[x].frmt_type[y + 1] != '\0')
				element++, y++;
			else
				break;
		}
		else
		{
			y = 0;
			x++;
			element = elemen_0;
		}
	}
	return (y);
}
