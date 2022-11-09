#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX output
 *
 * @filename: the name of the text file
 * @letters: the number of letters to read and print
 *
 * Return: actual number of letters read and printed
 *
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t p, a;
	char *buffer = NULL;

	if (!(filename && letters))
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	p = read(i, buffer, letters);
	close(i);

	if (p < 0)
	{
		free(buffer);
		return (0);
	}

	if (!p)
		p = letters;

	a = write(STDOUT_FILENO, buffer, p);
	free(buffer);

	if (a < 0)
		return (0);

	return (a);
}
