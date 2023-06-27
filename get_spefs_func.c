#include "main.h"

/**
 * get_spefs_func - selects the right function to print according
 * to a specifier
 * @fmt: the specifier
 *
 * Return: the right function for the provided specifier or
 * NULL if the specifier provided is not found
 */

int (*get_spefs_func(const char *fmt))(va_list)
{
	int i = 0;
	spef_t spefs[] = {
		{"c", handle_c},
		{"s", handle_s},
		{"d", handle_di},
		{"i", handle_di},
		{"b", handle_b},
		{"r", handle_r},
		/* Add structs for other specifiers here */
		{NULL, NULL},
	};

	while (spefs[i].spef)
	{
		if (*(spefs[i].spef) == *fmt)
			return (spefs[i].f);
		i++;
	}

	return (NULL);
}
