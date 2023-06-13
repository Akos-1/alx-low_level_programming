#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - 1024 bytes is allocated for a buffer.
 * @file: file name.
 * Return: A pointer .
 */
char *create_buffer(char *file)
{
	char *bf;

	bf = malloc(sizeof(char) * 1024);

	if (bf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}


	return (bf);
}


/**
 * close_file - inputed file descriptors.
 * @fd: The file descriptor.
 */
void close_file(int fd)
{
	int cl;


	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the contents of a file to another file is copied
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if successfully
 */
int main(int argc, char *argv[])
{
	int fr, t, re, wr;
	char *bf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bf = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, bf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bf);
			exit(98);
		}
		wr = write(t, bf, re);
		if (t == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bf);
			exit(99);
		}
		re = read(fr, bf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(bf);
	close_file(fr);
	close_file(t);
	return (0);
}
