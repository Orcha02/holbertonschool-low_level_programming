#include <stdio.h>
/**
 * main - prints single digit numbers starting from 0, followed by a new line.
 *
 *
 * Return: 0 success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
