#include "lists.h"
/**
 * print_dlistint - Function that prints content of a doubly list
 * @h: Head of the list. Pointer to a structure dlistint_s
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes;
	const dlistint_t *tmp = h; /*tmp = Node*/
	/*tmp-> Temporal variable to move instead of the pointer*/
	for (n_nodes = 0; tmp != NULL; n_nodes++)
	{
 /*Searches the data in (tmp) which is (n) and prints it*/
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (n_nodes);
}
