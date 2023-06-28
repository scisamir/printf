#include "main.h"

/**
 * convert - function that convert unsigned int to binary
 * @num: integer to check
 * @count: counter
 *
 * Return: Nothing
 */

void convert(unsigned int num, int *count)
{
	if (num > 1)
	{
		convert(num / 2, count);
	}
	_putchar((num % 2) + '0');
	(*count)++;
}

/**
 * handle_b - handles the specifier, 'b' which converts a decimal to binary
 * @b: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_b(va_list b)
{
	int r_value = 0;
	unsigned int bin = va_arg(b, unsigned int);

	convert(bin, &r_value);

	return (r_value);
}
