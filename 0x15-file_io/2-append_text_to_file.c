#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to append to the file
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr = 0, len = 0;

	if (filename == NULL)
		return (-1);
/*O_RDWR = read and write permissions*/
/*O_APPEND = appends text*/
/*0664 = -rw-rw-r-- (rw permission for owner & group)(read permission other)*/
	fd = open(filename, O_RDWR | O_APPEND, 0664);
/*if fails*/
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(fd, text_content, len);

		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
