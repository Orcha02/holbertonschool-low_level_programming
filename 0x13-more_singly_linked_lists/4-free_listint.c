#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -function that frees a list_t list
 * @head: pointer to a pointer
 * Return: void.
 **/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);/*call recursive function*/

		free(head);
	}
}
