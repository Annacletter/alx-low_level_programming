#include <stdio.h>
#include "main.h"

/**
 * read_textfile - prints a text file and reads it.
 * @filename: filename
 * @letters: The program should  read and print letters and numbers.
 * @filename: This is the filename of the Program.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(fd);
	free(buf);
	return (nwr);
}
