#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: This function prints file name.
 * @text_content: This function prints added content.
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
