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
	ssize_t n;

	buf = malloc(letters);
	if (!buf)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);
	}

	read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, letters);
	close(fd);

	return (n);
}
