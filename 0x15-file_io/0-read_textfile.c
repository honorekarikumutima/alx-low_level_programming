#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: the num of letters it should read and print
 * Return: w- actual num of bytes read and printed
 *               0- filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fp);
	return (w);
}

