#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -displays name to function using pointer
 * @name: inputed string
 * @f: inputed pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
