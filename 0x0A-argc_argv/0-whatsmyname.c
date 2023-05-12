#include <stdio.h>
#include <stdlib.h>
/**
*main - print executable as the name.
*@argc: argument count or size of arguments.
*@argv: argument vector
*Return: Always 0.
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

