#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function (const unsigned int)
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;/*Argument pointer variables*/
	unsigned int counter;
	int num;

	if (separator == NULL)
	{
		return;
	}

	va_start(my_list, n);/*Initialize argument list*/

	for (counter = 0; counter < n; counter++)
	{
		num = va_arg(my_list, int);/*gets argument value*/
		printf("%d", num);

		if (counter < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(my_list); /*Cleans up*/
	printf("\n");
}

