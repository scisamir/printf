#include "main.h"

/**
 * get_int - function that recursively prints an integer
 * and print its digit in correct order
 * @num: the integer to check
 *
 * Return: the digit in correct order
 */

int get_int(int num)
{
	int n, r_value = 0;

	/* check if num is 0 */
	if (!num)
	{
		_putchar(0 + '0');
		r_value++;
		return (r_value);
	}

	/* check for negative value */
	else if (num < 0)
	{
		_putchar('-');
		r_value++;
		num = -num;
	}

	n = num / 10;

	if (n != 0)
	{
		r_value += get_int(n);

	}
	_putchar(num % 10 + '0');
	r_value++;

	return (r_value);

}

/**
 * handle_di - handles the specifiers, 'd' and 'i'
 * @di: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_di(va_list di)
{
	int r_value = 0;

	int de_int = va_arg(di, int);

	if (de_int == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');

		return (11);
	}

	r_value = get_int(de_int);

	return (r_value);
}
