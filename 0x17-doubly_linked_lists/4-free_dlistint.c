#include "lists.h"
/**
 * free_dlistint -Function that frees a dlist_t list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;/*Tail node to get (&next) from freeded node*/

	if (head == NULL)
		return;
	/*To iterate while exists*/
	while (head != NULL)
	{
		tmp = head;/*To use a temporal variable*/
		head = head->next; /*Tail node gets direction of (next) node*/
		free(tmp);/*Free current node which is tmp the copy of head*/
	}
}
