#include "main.h"

/*
 * handle_di - function to hanle the specifier d and
 * i of printf
 * @di: specifeir to input
 *
 * Return: the valeu of the specifier
 */

int handle_di(va_list di)
{
	int r_value = 0;
	int de_int = (char)va_arg(di, int);

	if (de_int == 'd' || de_int == 'i')
	{
		r_value += get_int(de_int);
	}
	else
	{
		_putchar((char)de_int);
		r_value ++;
	}
	return (r_value);
}
