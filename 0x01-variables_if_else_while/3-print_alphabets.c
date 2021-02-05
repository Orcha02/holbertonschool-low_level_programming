#include <stdio.h>
/**
 * main - print alphabet in lower case, and then in upper case
 *
 *
 * Return: 0 success
 */
int main(void)
{
	char alphabet;
	char upperalphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (upperalphabet = 'A'; upperalphabet <= 'Z'; upperalphabet++)
	{
		putchar(upperalphabet);
	}
	putchar('\n');
		return (0);
}
