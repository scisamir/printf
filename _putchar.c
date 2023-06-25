#include <unistd.h>

/**
 * _putchar - function that print a character
 * @c: the character to be printed
 *
 * Return: the value of character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
