#include<stdio.h>
#include "main.h"

/**
 * create_file - This program creates a file.
 * @filename: This represents the file name.
 * @text_content: This program prints content written in the file in question.
 *
 * Return: 1 on success. -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
