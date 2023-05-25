#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - displays string
 * @separator: string printed between the two strings
 * @n: number of strings
 * @...: a variable number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *st;
	unsigned int in;

	va_start(strings, n);
	for (in = 0; in < n; in++)
	{
		st = va_arg(strings, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

