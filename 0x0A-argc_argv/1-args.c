#include <stdio.h>

/**
*main -  print name
*@argc: integer
*@argv: character
*Return: Always 0.
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
