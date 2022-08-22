#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file.
 * @text_content: content of the file.
 *
 * Return: 1 if it's successful. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int cf;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cf == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(cf, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(cf);

	return (1);
}
