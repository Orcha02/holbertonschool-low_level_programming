#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: Size of the array
 * Return: Pointer to hash table created or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int index = 0;
/*Creation of New Hash Table*/
	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return (NULL);
/*Save data in array*/
	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable == NULL)
		return (NULL);
/*Initialize array elements = NULL*/
	while (index < size)
	{
		newTable->array[index] = NULL;
		index++;
	}
	return (newTable);
}
