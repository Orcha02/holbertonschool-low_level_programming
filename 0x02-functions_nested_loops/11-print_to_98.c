#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all numbers from n to 98
 *
 * @n: int
 *
 * Return: 0 success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");

			n++;

		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");

			n--;

		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
