#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: added content.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int af;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	af = open(filename, O_WRONLY | O_APPEND);

	if (af == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(af, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(af);

	return (1);
}
