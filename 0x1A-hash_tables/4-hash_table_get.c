#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht:is the hash table you want to look into.
 * @key:is the key you are looking for.
 * Return:value associated with the element, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size); /*Find index*/
	tmp = ht->array[index]; /*index position key*/

	if (tmp != NULL) /*search for key and return it*/
	{
		while (strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		return (tmp->value);
	}
	return (NULL); /*If tmp == NULL, then return NULL*/
}
