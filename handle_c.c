#include "main.h"

/**
 * handle_c - handles the specifier, 'c'
 * @c: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_c(va_list c)
{
	char cc = (char)va_arg(c, int);

	_putchar(cc);
	return (1);
}
