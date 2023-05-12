#include <stdio.h>
#include <stdlib.h>
/**
*main - print all arguments
*@argc: size of arguments.
*@argv: argument vector
*Return: Always 0
*/

int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
