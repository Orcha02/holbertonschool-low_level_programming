#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *
 * Return: 0 success
 */
int main(void)
{
	int singledigit;

	for (singledigit = '0'; singledigit <= '9'; singledigit++)
	{
		putchar(singledigit);
		if (!(singledigit == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
