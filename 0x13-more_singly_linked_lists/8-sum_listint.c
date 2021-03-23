#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that return the sum of  all data of the list
 * @head: pointer to a structure typedef list_t
 * Return:sum of all data of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
