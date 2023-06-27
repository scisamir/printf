#include "main.h"

/**
 * rot13ed - encodes a string using rot13
 * @str: the pointer to the string to be encoded
 *
 * Return: a pointer to the encoded string
 */

char *rot13ed(char *str)
{
	int i, j, k = 0, len = 0;
	char *rot13_str;
	char nm[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rt[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[len])
		len++;

	rot13_str = malloc(len + 1);
	if (rot13_str == NULL)
		return (NULL);

	while (str[k])
	{
		rot13_str[k] = str[k];
		k++;
	}
	rot13_str[k] = '\0';

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == nm[j])
			{
				rot13_str[i] = rt[j];
				break;
			}
		}
	}

	return (rot13_str);
}


/**
 * handle_rot13 - handles the specifier, 'R' which encodes a string in rot13
 * @rot13: the variable argument(s) passed to _printf
 *
 * Return: the number of character(s) printed
 */

int handle_rot13(va_list rot13)
{
	int count = 0;
	char *rot13_str;
	char *str = va_arg(rot13, char *);

	rot13_str = rot13ed(str);

	while (*rot13_str)
	{
		_putchar(*rot13_str++);
		count++;
	}

	return (count);
}
