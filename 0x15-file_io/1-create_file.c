#include "main.h"
/**
 * create_file - this function creates and writes into a file
 * and copies the contents in it
 * @filename: the name of the creates file
 * @text_content: content to be copied into the file
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ti;
	int nletters;
	int rwrite;

	if (!filename)
		return (-1);

	ti = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ti == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwrite = write(ti, text_content, nletters);

	if (rwrite == -1)
		return (-1);
	close(ti);

	return (1);
}
