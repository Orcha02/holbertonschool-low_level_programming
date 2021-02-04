#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 *
 * Return: 0 success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
