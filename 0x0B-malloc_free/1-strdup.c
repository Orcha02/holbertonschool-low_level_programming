#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int length = 0;
	int cont;
	char *a;

	if (str ==  NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	a = malloc(sizeof(char) * length + 1);
	if (a == NULL)
	{
		return (NULL);
	}
		for (cont = 0; cont < length; cont++)
			a[cont] = str[cont];
		return (a);
}
