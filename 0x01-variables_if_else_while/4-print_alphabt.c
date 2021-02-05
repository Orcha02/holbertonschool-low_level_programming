#include <stdio.h>
/**
 * main - print alphabet in lowercase, followed by a new line.
 *
 *
 * Return: 0 success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
}
	putchar('\n');
	return (0);
}
