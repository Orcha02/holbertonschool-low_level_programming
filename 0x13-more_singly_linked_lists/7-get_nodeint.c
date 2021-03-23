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
	unsigned int count = 0;

	current_node = head;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node->next);
		count++;
	}
	return (current_node);
}
