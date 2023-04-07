#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - entry point
 * @filename: char
 * @letters: int
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *dee;
	ssize_t i;
	ssize_t y;
	ssize_t x;

	i = open(filename, 0_RDOMLY);
	if (i == -1)
		return (0);
	dee = malloc(sizeof(char) * letters);
	x = read(i, dee, letters);
	y = write(STDOUT_FILEND, dee, x);

	free(dee);
	close(i);
	return (y);
}
