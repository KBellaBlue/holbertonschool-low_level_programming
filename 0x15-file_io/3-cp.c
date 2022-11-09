#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * main - copies contents of file to another file
 *
 * @argc: count of arguements
 * @argv: arguement variables
 *
 * Return: 0
 *
 **/
int main(int argc, char **argv)
{
	int i, p, a, s;
	char buffer[1024];

	if (argc != 3)
		error("Usage: cp file_from file_to ", "", 97);

	i = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (i == -1)
		error("Error: Can't write to ", argv[2], 99);

	p = open(argv[1], O_RDONLY);
	if (p == -1)
		error("Error: Can't read from file ", argv[1], 98);

	while (a == 1024)
	{
		s = read(p, buffer, 1024);
		if (s == -1)
			error("Error: Can't read from file ", argv[1], 98);

		a = write(i, buffer, s);
		if (a == -1 || a != s)
			error("Error: Can't write to ", argv[2], 99);
	}

	if (close(a))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
	if (close(i))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}

	return (0);
}
/**
 * error - prints the error message and exits
 *
 * @s: the exit message
 * @filename: the file
 * @exitCode: the exit code number
 *
 * Return: void
 **/
void error(char *s, char *filename, int exitCode)
{
	dprintf(STDERR_FILENO, "%s%s\n", s, filename);
	exit(exitCode);
}
