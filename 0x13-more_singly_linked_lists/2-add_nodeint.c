#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @n: constant int value
 * @head: pointer to a pointer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
/*Assign value of n to n of new_node*/
	new_node->n = n;
/*Assign head to new_node->next*/
	new_node->next = *head;
/*Assign head to new_node address (which will be the 1st node)*/
	*head = new_node;/*head = &new_node*/

	return (new_node);
}
