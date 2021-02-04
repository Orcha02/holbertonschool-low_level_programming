#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - fetch last digit of n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	if (n % 10 == 0)
	{
		printf("%d and is 0\n", n);
	}
	if (n % 10 < 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
