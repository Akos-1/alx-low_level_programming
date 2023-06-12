#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - text file is read and printed
 * @filename: text file to be read
 * @letters: letters to be read
 * Return: wr, actual number if read or printed 
 * and 0 it fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t re;
	ssize_t wr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	re = read(fd, bf, letters);
	wr = write(STDOUT_FILENO, bf, re);

	free(bf);
	close(fd);
	return (wr);
}
