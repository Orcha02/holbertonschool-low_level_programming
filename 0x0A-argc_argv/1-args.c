#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
