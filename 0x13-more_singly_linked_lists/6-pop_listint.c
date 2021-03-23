#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head nodes data (n).
 * @head: pointer to a pointer
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int num;

	if (*head == NULL)
		return (0);
/*Assign address of node after head to new_head*/
	new_head = (*head)->next;
/*Assign value of n to num*/
	num = (*head)->n;
	free(*head);
/*Assign head to new_node address*/
	*head = new_head;
	return (num);/*To return the head nodes data*/
}
