#include "main.h"

/**
 * read_textfile - read a text
 * @filename: filename
 * @letters: bumber
 * Return: numbers
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t n, nwr;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(f, buf, letters);
	nwr = write(STDOUT_FILENO, buf, n);

	close(f);

	free(buf);

	return (nwr);
}
