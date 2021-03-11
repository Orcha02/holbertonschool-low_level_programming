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
	op_t ops[] = {
	  {"+", op_add};
	  {"-", op_sub};
	  {"*", op_mul};
	  {"/", op_div};
	  {"%", op_mod};
	  {NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
/*Validamos que la primera posicion q recibimos en op sea igual en string*/ 
/*Validamos que sea solo un caracter y asegurarnos que el siguiente sea nulo*/ 
		if (ops[i].op[0] == s[0] == '\0')
		{
			return (ops[i].f)
		}
	i++;
	}
	return (NULL);
}
