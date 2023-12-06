#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)

/**
 * struct fmt_types - struct that contain the format identifier and function
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt_types
{
	char fmt;
	int (*fn)(va_list);
};

typedef struct fmt_types fmt_type;



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
int handle_hexa(unsigned int num, char  *hexa);
#endif
