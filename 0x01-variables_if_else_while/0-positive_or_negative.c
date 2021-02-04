#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print positive, negative or zero
 *
 *
 * Return: 0 success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n < 0)
	{
		printf("is negative\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}

	return (0);
}
