#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer char
 * @s2: pointer char
 * @n: unsigned int
 *
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1, l2, c, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*leer el tamano de las cadenas*/
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{}
/*(CONDICION) si n es mayor o igual a la longitud de s2 se muestra todo s2*/
/*Necesito es que no se muestre todo*/
	if (n < l2)
	{
		l2 = n;
	}
/*asigno tamano al concatenado*/
	concat = malloc(sizeof(char) * (l1 + l2 + 1)); /* +1 para obtener nulo*/

	if (concat != NULL)
	{
		/*escribo las cadenas en el nuevo array*/
		for (c = 0; s1[c] != '\0'; c++)
		{
			concat[c] = s1[c];
		}
/*Aumento c para q no se sobre escriba c2 en c*/
		for (c2 = 0; c2 < l2; c2++)
		{
			concat[c + c2] = s2[c2];
		}
		concat[c + c2] = '\0';
		return (concat);
	}
	else
		return (NULL);
}
