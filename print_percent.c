#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @list: list of argument
 * Return: Number of chars printed
 */
int print_percent(va_list list)
{
	UNUSED(list);
	return (write(1, "%%", 1));
}
