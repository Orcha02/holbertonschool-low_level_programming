#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - function that frees a list_t list.
 * @head: pointer to a structure typedef list_t
 * Return: void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free(head->next);
	free(head->str);
	free(head);
	}
}
