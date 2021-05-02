#include "lists.h"
/**
 * sum_dlistint - Function that return the sum of  all data of the list
 * @head: Head of the list. Pointer to a structure dlistint_s
 * Return:sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	/*Create var to save the sum*/
	int sum;
	dlistint_t *tmp;/*Copy of head*/

	tmp = head;
/*Iterate list so get the sum*/
	for (sum = 0; tmp != NULL;)
	{
		sum += tmp->n; /*Add value on n to sum*/
		tmp = tmp->next; /*Update direction of tmp*/
	}
	return (sum);
}
