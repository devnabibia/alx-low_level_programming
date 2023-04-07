#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - entry point
 * @filename: char
 * @letters: int
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t file, dee, x;
	char *dx;

	dx = malloc(letters);
	if (dx == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, 0_RDONLY);

	if (file == -1)
	{
		free(dx);
		return (0);
	}

	dee = read(file, dx, letters);
	x = write(STDOUT_FILENO, dx, dee);

	close(file);

	return (x);
}
