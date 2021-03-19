#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to a structure typedef list_t
 *
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes;
	const list_t *tmp = h;
/*Creo y muevo el tmp para no mover el puntero*/
/*tmp es el nodo*/
	for (n_nodes = 0; tmp != '\0'; n_nodes++)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (n_nodes);
}
