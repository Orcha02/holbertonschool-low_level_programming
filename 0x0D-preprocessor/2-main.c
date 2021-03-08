#include <stdio.h>
/**
 * main - main entry
 * Program that will print name of the file it was comiled from
 * Return: void
 */
int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
