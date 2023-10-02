#include "main.h"
/**
 * append_text_to_file - adds txt to a file that is already existing
 *
 * @filename: filename to add content to
 * @text_content: content to be added to the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ti;
	int nletters;
	int rwrites;

	if (!filename)
		return (-1);

	ti = open(filename, O_WRONLY | O_APPEND);

		if (ti == -1)
			return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwrites = write(ti, text_content, nletters);

		if (rwrites == -1)
			return (-1);
	}
	close(ti);

	return (1);
}
