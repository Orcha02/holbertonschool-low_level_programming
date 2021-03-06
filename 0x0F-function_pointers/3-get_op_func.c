#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - contains the function that will perform
 * the operation ask by the user
 * @s: pointer to function
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
/*para seleccionar la operacion aritmetica que se va a realizar*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
/*Validamos que la primera posicion q recibimos en op sea igual en string*/
/*Validamos que sea solo un caracter y asegurarnos que el siguiente sea nulo*/
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);

}
