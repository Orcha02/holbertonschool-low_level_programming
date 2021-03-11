#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */
int main(int argv, char *argc[])
/*usamos argv y argc porq no nos deja acceder a la funcion directamente*/
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);/*para indicar que es de error*/
	}
	/*recibo el codigo no string o dato CODIGO por ser puntero a una funcion*/
	p_func = get_op_func(argv[2]);

	if (p_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	r = p_func(x, y);

	printf("%d\n", r);
	return (0);
}
