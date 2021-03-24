#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverse a list
 * @head: the head of list
 * Description: this function reverse a singly linked list
 * Return: head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node, *current_node;

	if (*head == NULL)
		return (NULL);

	current_node = *head;

	while (current_node->next != NULL)
	{
		new_node = current_node->next;
		current_node->next = new_node->next;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
