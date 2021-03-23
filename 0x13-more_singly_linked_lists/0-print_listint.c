#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;
	const listint_t *tmp = h;
/*tmp es el nodo*/
	for (n_nodes = 0; tmp != '\0'; n_nodes++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;/*to point the next node*/
	}
	return (n_nodes);
}
