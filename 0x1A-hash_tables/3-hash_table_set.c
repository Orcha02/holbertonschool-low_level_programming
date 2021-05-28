#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: hash table to add or update key/value
 * @key: key. Can not be empty string
 * @value: value associated with the key. must be duplicated.
 * value can be an empty string.
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned int index;

	index = key_index((unsigned char *)key, ht->size); /*Find index*/
	tmp = ht->array[index];/*Assign head to the hash table index*/

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
/*allocate memory for new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node != NULL) /* if it is == NULL, will have seg fault*/
		return (0);/*0 if it not succeded*/

	if (strcmp(key, tmp->key) == 0)/*Compare to see if exists*/
	{
		free(tmp->value);
		tmp->value = strdup(value);/*copy value*/
		return(1);/*1 if it succeded*/
	}
	tmp = tmp->next;
/*update value*/
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
