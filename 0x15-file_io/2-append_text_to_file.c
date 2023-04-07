#include "main.h"

/**
 * append_text_to_file - entry
 * @filename: input
 * @text_content: contains the content of the project
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, 0_WRONLY | 0_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}

