#include "main.h"

/**
 * create_file - starting point
 * Description: a file is created
 * @filename: name of the file created
 * @text_content:  terminated string to write to the file
 * Return: 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int wr;
	int o;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, l);

	if (o == -1 || wr == -1)
		return (-1);
	close(o);
	return (1);
}
