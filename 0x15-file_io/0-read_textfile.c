#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	FILE *fp;

	fp = fopen("filename.txt", "r+");

	if (fp == NULL)
	{
		return (0);
	}
	char *buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	size_t read_bytes = fread(buffer, sizeof(char), letters, fp);

	if (read_bytes != letters)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	size_t written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	if (written_bytes != read_bytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (read_bytes);
}
