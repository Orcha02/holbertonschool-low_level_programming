#include"hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *list;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			list = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = list;
		}
	}
	free(ht->array);
	free(ht);
}
