#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer 1
 * @s2: pointer 2
 *
 * Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int l1, l2, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*leer el tamano de las cadenas*/
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{}
/*asigno tamano al concatenado*/
	concat = malloc(sizeof(char) * (l1 + l2 + 1)); /* +1 para obtener el nulo*/
/*escribir las cadenas en el nuevo array*/
	if (concat == NULL)
		return (NULL);
	while (*s1)
	{
		concat[c] = *s1;
		c++;
		s1++;
	}
	while (*s2)
	{
		concat[c] = *s2;
		c++;
		s2++;
	}
	return (concat);
}
