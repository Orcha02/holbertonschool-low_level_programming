#include "lists.h"
/**
 * get_dnodeint_at_index -Function that return the nth node of a list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * @index: n node of the llist
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;/*copy of head*/

	tmp = head;

	while (index > 0)
	{ /*if node does not exist return null*/
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		index--;
	}
	return (tmp);

	
}
