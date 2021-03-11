#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: constant pointer char
 * @n: constant unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int counter;
	char *words;

	va_start(my_list, n);/*Initializes argument list*/

	for (counter = 0; counter < n; counter++)
	{
		words = va_arg(my_list, char *);/*gets next argument value*/

		if (words == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", words);

		if (counter < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(my_list); /*cleans up*/
	printf("\n");
}
