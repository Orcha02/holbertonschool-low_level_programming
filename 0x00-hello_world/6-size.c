#include <stdio.h>
/**
 * main - prints the size of various types
 *
 *
 * Return: 0 success
 */
int main(void)
{
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of an int: %zu byte\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
