#include "hash_tables.h"


/**
 * hash_table_set - sets a value in the hash table
 * @ht: table to set in
 * @key: key of the pair
 * @value: value in pair to set
 * Return: 1 on success | 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *cur_hs = NULL;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->next = NULL;
	node->key = (void *)key;
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);
	index = key_index((void *)key, ht->size);
	cur_hs = ht->array[index];
	if (cur_hs == NULL)
		ht->array[index] = node;
	else
	{
		if (strcmp(cur_hs->key, key) == 0)
		{
			free(ht->array[index]);
			ht->array[index] = node;
		}
		else
		{
			node->next = cur_hs->next;
			cur_hs->next = node;
		}
	}
	return (1);

}
