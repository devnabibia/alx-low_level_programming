#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - entry point
 * @filename: pointer
 * @letters: size of
 * Return: sctuslnu
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, x;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	x = write(STDOUT_FILENO, text, let);

	close(file);

	return (x);
}

