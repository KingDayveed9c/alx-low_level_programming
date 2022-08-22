#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fp, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fp);

	free(buf);

	return (nwr);
}
