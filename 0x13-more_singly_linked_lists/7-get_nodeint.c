#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index -function that return the nth node of a list
 * @head: pointer to a pointer
 * @index: n node of the llist
 * Return: the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int counter = 0;

	current_node = head;

	while (counter != index)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
		counter++;
	}
	return (current_node);
}
