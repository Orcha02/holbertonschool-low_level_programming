#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: contain the name of the file to read
 * @letters: number of letters to read
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t wr = 0, rd = 0;

	if (filename == NULL)
		return (0);
/*Open file and give permission type*/
	fd = open(filename, O_RDONLY);
/*Check if file has open*/
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);
/*Read file*/
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}
/*Print file*/
	wr = write(STDOUT_FILENO, buff, rd);
/*If write fails*/
	if (wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buff);
	return (wr);
}
