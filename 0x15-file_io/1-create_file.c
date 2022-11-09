#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - returns length of string
 *
 * @s: the string
 *
 * Return: the length of the string
 *
 **/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 * @text_content: the text to fill in the file
 *
 * Return: 1 on success or -1 on failure
 *
 **/
int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t p;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (i < 0)
		return (-1);

	if (text_content)
		p = write(i, text_content, _strlen(text_content));

	close(i);

	if (p < 0)
	{
		return (-1);
	}

	return (1);
}
