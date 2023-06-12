#include "main.h"
/**
 * append_text_to_file - Starting point
 * Description - texts are appended at the end of a line
 * @filename: name of file's pointer
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int wr;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, l);
	if (o == -1 || wr == -1)
		return (-1);
}
