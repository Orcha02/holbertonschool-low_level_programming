#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - function that prints char
 * @element: va_list
 * Return: void
 */
void print_char(va_list element)
{
	printf("%c", va_arg(element, int));
}

/**
 * print_int - function that prints int
 * @element: va_list
 * Return: void
 */
void print_int(va_list element)
{
	printf("%d", va_arg(element, int));
}

/**
 * print_float - Function that prints float
 * @element: va_list
 * Return: void
 */
void print_float(va_list element)
{
	printf("%f", va_arg(element, double));
}

/**
 * print_string - function that prints string
 * @element: va_list
 * Return: void
 */
void print_string(va_list element)
{
	char *s;

	s = va_arg(element, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
/*arr_format= Array of type structure with typedef get_format*/
	get_format arr_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list a_list;
	int inf = 0, c;
	char *separator = "";
	/*i= index of format*/
	va_start(a_list, format);/*initialize the argument  list*/

	while (format != NULL && format[inf] != '\0')
	{
		c = 0;
		while (c < 4)/*format is string "ceis"*/
		{
			if (format[inf] == *(arr_format[c].p_type))
			{
				printf("%s", separator);
				arr_format[c].func(a_list, separator);
				separator = ", ";
				break;
			}
			c++;
		}
		inf++;
	}
	printf("\n");
	va_end(a_list);
}

