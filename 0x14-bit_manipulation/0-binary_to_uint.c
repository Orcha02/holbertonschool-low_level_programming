#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number in char pointer
 * Return: converted unsigned integer or 0 if
 * b have a diferent string to 1 or 0, b is null 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0;


	if (b != NULL)
	{
		for (len = 0; b[len]; len++)
		{
			if (b[len] == '1' || b[len] == '0')/*validar si es binario*/
			{
/*calculo binario a decimal de derecha a izquierda*/
				num = num << 1;/*desplazo 1 una posicion a la izquierda para no iniciar en 0*/
/*la suma de los elevados es el numero en decimal*/
				num = num + b[len] - '0';
				
			}
			else
				return (0);
		}
		return (num);
	}
	return (0);
}
