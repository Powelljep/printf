#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x);

/**
 * struct fmt - struct that contain the format identifier and function
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list);
};

/**
 * typdef struct fmt  fmt_type - struct tha contains the idetifier an function
 *
 * @fmat: The format.
 * @fm_t: The function associated
 */

typedef struct fmt fmt_type;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *index, va_list list);
int print_char(va_list list);
int handle_char(char c);
int print_string(va_list list);
int handle_string(char *str);
int print_percent(va_list list);
int print_int(va_list list);
int handle_num(int);
int print_binary(va_list list);
int handle_binary(unsigned int num);
int print_unsigned(va_list list);
int handle_unsign(unsigned int num);
int print_octal(va_list list);
int handle_octal(unsigned int num);
int print_hexa_lower(va_list list);
int print_hexa_upper(va_list list);
int handle_hexa(unsigned int num, char * hexa);
#endif
