#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the text to be saved in the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *text;
	int i;
	int size;

	for (size = 0; text_content[size] != '\0'; size++)
		;

	text = malloc(size + 1);
	if (!text)
		return (-1);

	for (i = 0; i < size; i++)
		text[i] = text_content[i];

	text[size] = '\0';

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text, size);

	close(fd);
	free(text);
	return (1);
}
