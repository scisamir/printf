#include "main.h"

/**
 * handle_r - handles the specifier, 'r' which prints a string in reverse
 * @r: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_r(va_list r)
{
	int i, len = 0;
	char *str = va_arg(r, char *);

	while (str[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
