#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int ht_index;

	if (strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->next = NULL;
	node->key = key;
	strdup(node->value, value);
	if (node->value == NULL)
		return (0);
	ht_index = key_index(
}
