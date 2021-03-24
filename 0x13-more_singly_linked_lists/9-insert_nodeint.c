#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that adds a new node
 * in an index position of list
 * @head: pointer to a pointer
 * @idx: int that represents the index, where the node is going to be inserted
 * @n: integer value of the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node = *head;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));/*Memory for new_node*/

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
/*Assign value of n to member n of new_node*/
	new_node->n = n;
/*When new_node is in index 0*/
	if (idx == 0)
	{
/*Assign head to new_node->next*/
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (counter != (idx - 1))
	{
		if (current_node == NULL)
		{
			free(current_node);
			return (NULL);
		}
/*Assign next address of current_node to current_node*/
		current_node = current_node->next;/*current_node = &next*/
		counter++;
	}
/*Assign new_node address to current_node*/
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
