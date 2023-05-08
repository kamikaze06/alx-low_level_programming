#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp, w, r;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fp);
	return (w);
}
