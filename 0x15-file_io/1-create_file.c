#include "main.h"
/**
 * _strlen - finds the length of a string
 * @str: pointer to the string.
 * Return: length of the string.
 */

size_t _strlen(char *str)
{
	size_t i;

	i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);

}



/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t l = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		l = write(fd, text_content, _strlen(text_content));
		close(fd);
	}

	if (l == -1)
	{
		return (-1);
	}

	return (1);

}
