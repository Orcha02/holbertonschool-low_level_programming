#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to a structure typedef list_t
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes;
	const listint_t *tmp = h;

	for (n_nodes = 0; tmp != '\0'; n_nodes++)
	{
		tmp = tmp->next;
	}
	return (n_nodes);
}
