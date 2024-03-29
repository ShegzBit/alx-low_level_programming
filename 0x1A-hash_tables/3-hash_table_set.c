#include "hash_tables.h"


/**
 * free_item - free a node
 * @node: node
 */
void free_item(hash_node_t *node)
{
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * handle_collision - handles collision
 * @ht: hash table on which collision occured
 * @index: index of collision in hash table
 * @node: node to input
 * Return: 1 on success
 */
int handle_collision(hash_table_t *ht, unsigned long int index,
		hash_node_t *node)
{
	hash_node_t *cur_hs = NULL;

	cur_hs = ht->array[index];
	if (cur_hs != NULL && strcmp(cur_hs->key, node->key) == 0)
	{
		free_item(ht->array[index]);
		ht->array[index] = node;
	}
	else
	{
		while (cur_hs != NULL)
		{
			if (strcmp(cur_hs->key, node->key) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(node->value);
				free(node->key);
				free(node->value);
				free(node);
				break;
			}
			cur_hs = cur_hs->next;
		}
		if (cur_hs == NULL)
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}


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

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->next = NULL;
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (0);
	}
	index = key_index((void *)key, ht->size);
	cur_hs = ht->array[index];
	if (cur_hs == NULL)
		ht->array[index] = node;
	else
	{
		handle_collision(ht, index, node);
	}
	return (1);

}
