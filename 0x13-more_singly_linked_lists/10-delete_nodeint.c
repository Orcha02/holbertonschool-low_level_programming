#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index "index" of a listint.
 * @head: pointer to a pointer of type listint_t (structure
 * @index: the inde of the node that should be deleted, index starts at 0
 * Return: 1 if succeed, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *current_node, *new_node;

	current_node = *head;
	if (current_node == NULL)/*if current_node doesnt exist*/
		return (-1);
/*If index is 0 I delete node 0*/ 
	if (index == 0)
	{
		current_node = current_node->next; 
		free(*head);/*free 1st node*/
		*head = current_node;/*Current_node is new head*/
	}
	else
	{
		for (counter = 0; counter < index - 1; counter++)
		{
			if (current_node == NULL)/*if fails end program*/
				return (-1);
/*current_node goes to the next node until it gets to one position before index*/
			current_node = current_node->next;
		}
/*Assign current_node to new_node*/
		new_node = current_node;
/*Save new_node that is after the one im deleting*/
		new_node = new_node->next->next;
/*I am 1 position before the index they want me to delete so I free (delete) the next node*/
		free(current_node->next);
		current_node->next = new_node;
		}
	return (1);
}
