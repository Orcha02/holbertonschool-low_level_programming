#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to a pointer
 * @n: constant int value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;/*New node that will be added at the end*/
	listint_t *tmp = NULL;/*Current end node in temporal variable*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
/*Assign NULL to new_node->next since it will be the last node*/
	new_node->next = NULL;
/*Find CURRENT last node*/
	if (*head == NULL)/*If list is empty, meaning there's nothing more than head*/
	{
		*head = new_node;
		return (new_node);
	}
/*Iterate through list until it hits the last node*/
/*A temporal variable will save the CURRENT last node address*/
	for (tmp = *head; tmp->next != NULL;)
		tmp = tmp->next;
/*Assign tmp address to new_node*/
	tmp->next = new_node;/*new_node = &tmp*/
	return (new_node);
}
