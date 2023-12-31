#ifndef __PRINT_F__
#define __PRINT_F__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct spef - Struct spef
 *
 * @spef: the specifier
 * @f: the function associated
 */

typedef struct spef
{
	char *spef;
	int (*f)(va_list);
} spef_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_spefs_func(const char *fmt))(va_list);

/* Specifier handler functions */
int handle_c(va_list c);
int handle_s(va_list s);
int handle_di(va_list di);
int handle_b(va_list b);
int handle_r(va_list r);
int handle_rot13(va_list rot13);

#endif /* __PRINT_F__ */
