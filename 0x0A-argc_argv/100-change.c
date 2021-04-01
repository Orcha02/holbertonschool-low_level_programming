#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of coins to make
 * change for an amount. The coins only are 25,10,5,2 and 1 cent.
 * @argc: int number. size of argv.
 * @argv: char.
 * Return: Error & 1 if arcg != 2, else, value.
 */

int main(int argc, char *argv[])
{
	int cant, coins;

	cant = 0;
	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cant = atoi(argv[1]);
		while (cant > 0)
		{
			coins++;
			if (cant >= 25)
				cant -= 25;
			else if (cant >= 10)
				cant -= 10;
			else if (cant >= 5)
				cant -= 5;
			else if (cant >= 2)
				cant -= 2;
			else if (cant >= 1)
				cant -= 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
