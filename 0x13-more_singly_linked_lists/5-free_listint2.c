#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;/*Next node of tmp is tmp unitl NULL*/
		free(*head);
/*Assign head to tmp address (new head is tmp)*/
		*head = tmp;/*head = &tmp*/
	}
	*head = NULL;/*The function sets the head to NULL*/
}
