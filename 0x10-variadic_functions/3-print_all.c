#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - display anything
 * @format: list arguments  passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *st, *b = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", b, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char*);
					if (!st)
						st = "(nil)";
					printf("%s%s", b, st);
					break;
				default:
					a++;
					continue;
			}
			b = ",";
			a++;
		}
	}
	printf("\n");
	va_end(list);
}

