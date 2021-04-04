#include "holberton.h"
/**
 * main - Copies a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Description: This program copies the contents of a file to another file.
 * If the destination file exists, it will truncate its contents.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *origin, *dest;
	char buffer[1024];
	int fdorigin, fddest;
	ssize_t readbuffersize;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	origin = argv[1], dest = argv[2];
	/* open src file */
	fdorigin = open(origin, O_RDONLY);
	/* check if the origin file is open */
	if (fdorigin == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", origin), exit(98);
	/* open dest file */
	fddest = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* read from origin chars as buffer allow */
	while ((readbuffersize = read(fdorigin, buffer, 1024)) > 0)
		/* check if can write to dest file */
		if (fddest == -1 ||
		    readbuffersize != write(fddest, buffer, readbuffersize))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest), exit(99);
	/* check if can read from origin */
	if (readbuffersize == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", origin), exit(98);
	/* close the files */
	if (close(fdorigin) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdorigin), exit(100);
	if (close(fddest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddest), exit(100);
	return (0);
}
