#include "lists.h"
/**
 *dlistint_len - Function that returns the number of elements in a linked list.
 *@h: pointer to a structure typedef list
 *Return: Number of element in list_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t *tmp = h;

	for (n_nodes = 0; tmp != NULL; n_nodes++)
		tmp = tmp->next;
	return (n_nodes);
}
