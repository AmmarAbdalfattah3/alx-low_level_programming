#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @filename: name of the file.
 * @letters: number of the letters.
 * Return: returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t len1, len2;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	len1 = read(fd, buf, letters);
	close(fd);
	if (len1 == -1)
	{
		free(buf);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buf, len1);
	if (len2 != -1)
	{
		free(buf);
		return (0);
	}
	if (len1 != len2)
	{
		return (0);
	}
	return (len2);
}

