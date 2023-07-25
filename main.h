#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
 
/**
 * struct output - struct for associated output functions.
 * @frmt_type: specifier.
 * @pntr: output functions pointer.
 *
 * Description: struct stores pointers for output functions.
 */
typedef struct output
{
	char *frmt_type;
	int (*pntr)(va_list, char *, unsigned int);
} output_t;

int _printf(const char *format, ...);
int output_chout(va_list __attribute__((unused)), char *, unsigned int);
int output_chr(va_list args, char *bffr, unsigned int elem_bffr);
int output_string(va_list args, char *bffr, unsigned int elem_bffr);
int output_int(va_list args, char *bffr, unsigned int elem_bffr);
int output_binry(va_list args, char *bffr, unsigned int elem_bffr);
int output_unt(va_list args, char *bffr, unsigned int elem_bffr);
int output_octal(va_list args, char *bffr, unsigned int elem_bffr);
int output_hexadec(va_list args, char *bffr, unsigned int elem_bffr);
int output_sdhexadec(va_list args, char *bffr, unsigned int elem_bffr);
int output_snout(va_list args, char *bffr, unsigned int elem_bffr);
int output_addr(va_list args, char *bffr, unsigned int elem_bffr);
int output_reverse(va_list args, char *bffr, unsigned int elem_bffr);
int output_rot13(va_list args, char *bffr, unsigned int elem_bffr);
int output_lint(va_list args, char *bffr, unsigned int elem_bffr);
int output_lunt(va_list args, char *bffr, unsigned int elem_bffr);
int output_loct(va_list args, char *bffr, unsigned int elem_bffr);
int output_lhex(va_list args, char *bffr, unsigned int elem_bffr);
int output_lupx(va_list args, char *bffr, unsigned int elem_bffr);
int output_hint(va_list args, char *bffr, unsigned int elem_bffr);
int output_hunt(va_list args, char *bffr, unsigned int elem_bffr);
int output_hoct(va_list args, char *bffr, unsigned int elem_bffr);
int output_hhex(va_list args, char *bffr, unsigned int elem_bffr);
int output_hupx(va_list args, char *bffr, unsigned int elem_bffr);
int output_pint(va_list args, char *bffr, unsigned int elem_bffr);
int output_noct(va_list args, char *bffr, unsigned int elem_bffr);
int output_nhex(va_list args, char *bffr, unsigned int elem_bffr);
int output_nupx(va_list args, char *bffr, unsigned int elem_bffr);
int output_sint(va_list args, char *bffr, unsigned int elem_bffr);
int (*obtain_output_functions(const char *ch, int element))(va_list, char *, unsigned int);
int hpr_output_functions(const char *ch, int element);
unsigned int bffr_handle(char *bffr, char z, unsigned int elem_bffr);
char *stack_octal_arr(char *binry, char *oct);
char *stack_l_octal_arr(char *binry, char *oct);
int output_bffr(char *bffr, unsigned int n_bffr);
char *stack_bin_arr(char *bin, long int num, int is_negative, int max);
char *stack_hexadec_arr(char *binry, char *hexadec, int is_upper, int max);
char *stack_s_octal_arr(char *binry, char *oct);

#endif
