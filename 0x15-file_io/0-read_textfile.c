#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: number of letters to read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	buf = malloc(letters);
	if (!buf)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}

	write(fd, buf, letters);
	close(fd);

	return (0);
}
