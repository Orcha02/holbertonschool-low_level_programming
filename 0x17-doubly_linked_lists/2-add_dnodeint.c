#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of dlistint_t
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* Create new node */

	new_node = malloc(sizeof(dlistint_t));/* Allocate memory for the new node */

	if (new_node == NULL) /*Check if new node exists*/
		return (NULL);

	new_node->n = n; /*Set value of new node*/
	new_node->prev = NULL; /*Set value of prev of new node (SET NEW DIRECTIONS)*/

	/*If empty list = new is the only node*/
	/*So new->next is going to be null*/
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	/*If is not empty list, asign the new->next the head*/
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;/*Change direction of previous node*/
		*head = new_node; /*Update direction of head fo the next node*/
	}
	return (new_node);
}
