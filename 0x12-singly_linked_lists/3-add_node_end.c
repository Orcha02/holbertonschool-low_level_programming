#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @str: string
 * @head: pointer to a pointer
 * Return: the address of the new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;/*New node that will be added at the end*/
	list_t *tmp = NULL;/*Current end node in temporal variable*/
	unsigned int c = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	while (str[c] != '\0')
		c++;
/*Assign str_dup to the new_node->str*/
	new_node->str = strdup(str);
/*Assign str_len which is (c) to new_node->len*/
	new_node->len = c;
/*Assign NULL to new_node->next since it will be the last node*/
	new_node->next = NULL;
/*Find current last node*/
	if (*head == NULL)/*If list is empty, meaning there's nothing more than head*/
	{
		*head = new_node;
		return (new_node);
	}
/*iterate through list until it hits last node*/
/*A temporal variable will save current last node address*/
	for (tmp = *head; tmp->next != NULL;)
		tmp = tmp->next;
/*Assign tmp address to new_node*/
	tmp->next = new_node;
	return (new_node);
}
