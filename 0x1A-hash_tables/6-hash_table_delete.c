#include "hash_tables.h"


/**
 * free_node - free a node
 * @node: node
 */
void free_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - deletes a table
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	lu_int size = ht->size, i;
	hash_node_t *cur_hs = NULL, *next_hs = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		cur_hs = ht->array[i];
		while (cur_hs)
		{
			next_hs = cur_hs;
			cur_hs = cur_hs->next;
			free_node(next_hs);
		}
		free_node(cur_hs);
	}
	free(ht->array);
	free(ht);
}
