#include "hash_tables.h"

/**
 * hash_table_get - gets value stored with key in hash table
 * @ht: hash table to operate on
 * @key: key to search for
 * Return: Value stored with key if it exists
 *	| NULL if it doesn't
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur_hs = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	cur_hs = ht->array[index];
	if (cur_hs == NULL)
		return (NULL);

	if (strcmp(cur_hs->key, key) == 0)
		return (cur_hs->value);

	while (cur_hs != NULL)
	{
		if (strcmp(cur_hs->key, key) == 0)
			return (cur_hs->value);
		cur_hs = cur_hs->next;
	}
	return (NULL);
}
