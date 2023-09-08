#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: new hash table | NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_table;
	hash_node_t **node_arr;
	unsigned long int i;

	hs_table = malloc(sizeof(hash_table_t));
	if (hs_table == NULL)
		return (NULL);
	hs_table->size = size;
	node_arr = malloc(size * sizeof(hash_node_t *));
	if (node_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		node_arr[i] = NULL;
	hs_table->array = node_arr;
	return (hs_table);
}
