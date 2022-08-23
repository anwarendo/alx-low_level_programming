#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename
 * @text_content: the text to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int size;
	int i;
	char *buf;
	for (size = 0; text_content[size] != '\0'; size++)
		;

	buf = malloc(size + 1);
	if (buf == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		buf[i] = text_content[i];
	buf[i] = '\0';

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, buf , size);

	close(fd);

	return (1);
}
