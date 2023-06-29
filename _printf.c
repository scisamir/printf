#include "main.h"

/**
 * check_format - checks for a valid specifier
 * @c: the character to be checked as a specifier
 *
 * Return: 1 if a valid specifier is found otherwise 0
 */

int check_format(char c)
{
	if (c == '%' || c == 'c' || c == 's' || c == 'd' ||
		c == 'i' || c == 'b' || c == 'r' || c == 'R')
		return (1);
	return (0);
}


/**
 * _printf - writes output to stdout, the standard output stream
 * @format: format is a character string.
 * The format string is composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	int (*spef_func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && (check_format(format[i + 1]) ||
			format[i + 1] == '\0'))
		{
			i++;

			switch (format[i])
			{
				case '%':
					_putchar('%');
					count++;
					break;

				default:
					spef_func = get_spefs_func(&format[i]);
					if (spef_func == NULL)
						return (-1);
					count += spef_func(args);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);

	return (count);
}
