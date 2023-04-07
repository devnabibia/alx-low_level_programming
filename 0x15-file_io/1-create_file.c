#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - input
 * @filename: pointer
 * @text_content: pointer to the string
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int dx, z, dee = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dee = 0; text_content[dee];)
			dee++;
	}

	dx = open(filename, 0_CREAT | 0_RDWR | 0_TRUNC, 0600);
	z = write(dx, text_content, dee);

	if (dx == -1 || z == -1)
		return (-1);

	close(dx);

	return (1);
}
