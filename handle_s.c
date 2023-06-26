#include "main.h"

/**
 * handle_s - handles the specifier, 's'
 * @s: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_s(va_list s)
{
	int count = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}
