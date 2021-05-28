#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table.
 * @ht: hash table.
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{"); /*open the list*/
	for (index = 0; index < ht->size; index++)/*shows the list content*/
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (i == 1) /*1 to correct extra ',' at the beginning*/
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			i = 1;/* to put every ',' in 1*/
			tmp = tmp->next;
		}
	}
	printf("}\n"); /*close list*/
}
