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
	unsigned int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	tmp = ht->array[index];/*Assign head to the hash table index*/
	index = key_index((unsigned char *)key, ht->size); /*Find index*/

	while (tmp != NULL)
	{
		tmp = tmp->next;
		if (strcmp(tmp->key, key) == 0)/*Compare to see if exists*/
		{
			free(tmp->value);
			tmp->value = strdup(value);/*copy value*/
			if (tmp->value == NULL)
				return (0);/*0 if it not succeded*/
			return (1);/*1 if it succeded*/
		}
	}
/*allocate memory for new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node != NULL) /* if it is == NULL, will have seg fault*/
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
