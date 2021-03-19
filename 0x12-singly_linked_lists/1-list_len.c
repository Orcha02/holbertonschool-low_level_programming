#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: pointer to a structure typedef list_t
 * Return: number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	size_t n_nodes;
	const list_t *tmp = h;

	for (n_nodes = 0; tmp != '\0'; n_nodes++)
	{
		tmp = tmp->next;
	}
	return (n_nodes);
}
