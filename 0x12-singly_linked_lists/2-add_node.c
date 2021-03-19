#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @str: string
 * @head: pointer to a pointer
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int c = 0;/*c = str_len*/

	new_node = malloc(sizeof(list_t));/*malloc for new_node*/
	if (new_node == NULL)
		return NULL;

	while (str[c] != '\0')
		c++;
/*strdup = duplicates strings to new_node*/
/*Assign str_dup to the new_node->str*/
	new_node->str = strdup(str);
/*Assign str_len which is (c) to new_node->len*/
	new_node->len = c;
/*Assign head to new_node->next*/
	new_node->next = *head;
/*Assign head to new_node address*/ 
	*head = new_node;
	
	return (new_node);
}
