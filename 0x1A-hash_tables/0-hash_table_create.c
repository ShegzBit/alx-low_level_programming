#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 * @size: size of the table
 * Return: new hash table | NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_table;
	int i;

	hs_table = malloc(sizeof(hash_table_t));
	if (hs_table == NULL)
		return (NULL);
	hs_table->size = size;
	hs_table->array = calloc(hs_table->size, sizeof(hash_node_t));
	if (hs_table->array == NULL)
		return (NULL);
	for (i = 0; i < hs_table->size; i++)
		hs_table->array[i] = NULL;
	return (hs_table);
}
