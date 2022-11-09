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
 * append_text_to_file - appends text to end of file
 *
 * @filename: the name of the filee
 * @text_content: the text to append
 *
 * Return: 1 on success or -1 on failure
 *
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i, p, a;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_RDWR | O_APPEND);
	if (i < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	a = _strlen(text_content);

	p = write(i, text_content, a);

	if (p < 1 || p != a)
		return (-1);

	return (1);
}
