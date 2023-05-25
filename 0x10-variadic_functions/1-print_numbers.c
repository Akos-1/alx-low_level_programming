#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - displays numbers
 * @separator: string between the printed numbers
 * @n: number of integers
 * @...: a variable number
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int in;

	va_start(nums, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(nums, int));
		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
