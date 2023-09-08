#include "hash_tables.h"


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
	hash_node_t *cur_hs = NULL, *temp = NULL;

	cur_hs = ht->array[index];
	if (cur_hs != NULL && strcmp(cur_hs->key, node->key) == 0)
	{
		free(ht->array[index]);
		ht->array[index] = node;
	}
	else
	{
		while (cur_hs != NULL)
		{
			if (strcmp(cur_hs->key, node->key) == 0)
			{
				node->next = cur_hs->next;
				temp->next = node;
				free(cur_hs);
				break;
			}
			temp = cur_hs;
			cur_hs = cur_hs->next;
		}
		if (cur_hs == NULL)
		{
			node->next = ht->array[index]->next;
			ht->array[index]->next = node;
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
		handle_collision(ht, index, node);
	}
	return (1);

}
