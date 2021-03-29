#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: contain the name of the file to read
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr = 0;

	if (filename == NULL)
		return (-1);
/*O_CREAT = create if doesnt exist*/
/*O_RDWR = read and write permissions*/
/*O_TRUNC = length truncated to 0 if is a regular file and exists*/
/*0600 = -rw------- (rw permission for owner)(no permissions for the rest)*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

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
