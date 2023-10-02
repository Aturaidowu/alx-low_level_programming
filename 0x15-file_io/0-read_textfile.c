#include "main.h"
/**
 * read_textfile - this function reads and prints a text file
 * to the POSIX standard output
 *
 * @filename: this is a filename (string pointer)
 * @letters: the number of letters to be printed
 * Return: printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ti;
	ssize_t nread;
	char *puf;
	ssize_t nwrite;

	if (!filename)
		return (0);

	ti = open(filename, O_RDONLY);

	if (ti == -1)
		return (0);

	puf = malloc(sizeof(char) * letters);
	if (puf == NULL)
		return (0);

	nread = read(ti, puf, letters);
	nwrite = write(STDOUT_FILENO, puf, nread);

	close(ti);
	free(puf);

	return (nwrite);
}
