#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024

/**
 * read_filename - reads a file into a buffer
 * @filename: name of the file.
 * @buffer: pointer to a pointer of a buffer.
 * @fd: file descriptors
 * Return: size of the buffer.
 */

static ssize_t read_filename(char *filename, char **buffer, int fd)
{
int len;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from filename %s\n", filename);
		exit(98);
	}

	if (!buffer)
	{
	*buffer = malloc(sizeof(char) * BUFFER_SIZE);
	}

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from filename %s\n", filename);
		exit(98);
	}

len = read(fd, *buffer, BUFFER_SIZE);

	if (len < 0)
	{
		free(*buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from filename %s\n", filename);
		exit(98);
	}
	return (len);
}





/**
 * copy_file - copy the buffer to a filename.
 * @filename: destination for contents in buffer.
 * @fd: file descriptors.
 * @buffer: pointer to a buffer
 * @len: size of the buffer.
 */
static void copy_file(char *filename, int fd, char *buffer, int len)
{
	if (!buffer || fd < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (write(fd, buffer, len) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}




/**
 * main - copies the content of a file to another file.
 * @ac: argumet count.
 * @av: argument value.
 * Return: (0) always.
 */
int main(int ac, char **av)
{
	int fd_1, fd_2, len, error_close;
	char *file_from, *file_to, *buffer;

	len = 1;
	buffer = NULL;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_1 = open(file_from, O_RDONLY);
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (len > 0)
	{
		len = read_filename(file_from, &buffer, fd_1);
		if (!len)
		{
			break;
		}
		copy_file(file_to, fd_2, buffer, len);
	}
	free(buffer);
	error_close = close(fd_1);
	if (error_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	error_close = close(fd_2);
	if (error_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}
