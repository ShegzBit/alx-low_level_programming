#include "hash_tables.h"

/**
 * sort_table - sort the table in the alphabetical order
 * uppercase is lower than lowercase in ranking
 * @ht: table to sort
 * @node: new node to insert
 * @temp: a temp to use locally in function
 * @prev: a prev to use locally in funtion
 * both storage variable
 * Return: 1 on success | 0 otherwise
 * 0 only when null is passed
 */
int sort_table(shash_table_t **ht, shash_node_t *node,
		shash_node_t *temp, shash_node_t *prev)
{
	if (!ht || !node)
		return (0);
	temp = (*ht)->shead, prev = temp;
	if (temp == NULL)
	{
		(*ht)->shead = node;
		(*ht)->stail = node;
		return (0);
	} else if (strcmp(node->key, temp->key) < 0)
	{
		node->snext = temp;
		(*ht)->shead = node;
		if (temp)
			temp->sprev = node;
		return (1);
	}
	while (temp && strcmp(node->key, temp->key) > 0)
	{
		if (temp == NULL)
			break;
		prev = temp;
		temp = temp->snext;
	}
	if (temp && strcmp(node->key, temp->key) == 0)
	{
		prev->snext = node;
		node->sprev = prev;
		node->snext = temp->snext;
		if (temp->snext)
			temp->snext->sprev = node;
		free_snode(temp);
		return (1); }
	prev->snext = node;
	node->sprev = prev;
	node->snext = temp;
	if (temp)
		temp->sprev = node;
	if (!temp)
		(*ht)->stail = node;
	return (1);
}


/**
 * free_snode - frees a sorted table node
 * @node: node to free
 */
void free_snode(shash_node_t *node)
{
	(void)node;
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * shash_table_create - creates a hash table of sorted
 * items
 * @size: size of hash table to create
 * Return: sht<hash table>
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	shash_node_t **array;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	array = calloc(size, sizeof(shash_node_t *));
	if (array == NULL)
		return (NULL);
	sht->array = array;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}


/**
 * s_collision - handles collision in a sorted hash table
 * @ht: hash table on which collision occured
 * @node: new node to insert at collision point
 * @index: index on table at which collision occured
 */
void s_collision(shash_table_t *ht, shash_node_t *node, lu_int index)
{
	/*check if it is an update to main array cell and handle*/
	shash_node_t *cur_hs = ht->array[index], *temp;

	if (!ht || !node)
		return;
	if (strcmp(node->key, cur_hs->key) == 0)
	{
		ht->array[index] = node;
		/*free_snode(cur_hs);*/
		return;
	}
	temp = cur_hs;
	/*else traverse chain and handle*/
	while (cur_hs)
	{
	/*check if it's an update to the chain node*/
		if (strcmp(node->key, cur_hs->key) == 0)
		{
			node->next = cur_hs->next;
			temp->next = node;
			free_snode(cur_hs);
			return;
		}
		temp = cur_hs;
		cur_hs = cur_hs->next;
	}
	/*if not insert at beginning*/
	if (cur_hs == NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
}


/**
 * shash_table_set - inserts a new key-value pair in a hash table
 * @ht: hash table to insert in
 * @key: key in key-value pair to insert
 * @value: value in key-value pair to insert
 * Return: 1 on success | 0 otherwise
 * 0 usually on allocation fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	/*create vars check null for all arguments*/
	lu_int index;
	shash_node_t *node = NULL, *temp = NULL, *prev = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	/*create node anc check alloc success*/
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	/*populate node*/
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free_snode(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free_snode(node);
		return (0);
	}
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	/*get index and insert if cell is unoccupied*/
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	/*handle collision*/
	else
	{
		s_collision(ht, node, index);
	}
	/*handle sorting*/
	sort_table(&ht, node, temp, prev);
	return (1);
}

/**
 * shash_table_get - gets a value from a table
 * @ht: table to get from
 * @key: key of key-value pair to get
 * Return: value of key:value pair
 * or NULL if pair doesn't exist
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	lu_int index;
	shash_node_t *cur_hs = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	cur_hs = ht->array[index];
	if (cur_hs == NULL)
		return (NULL);
	if (strcmp(cur_hs->key, key) == 0)
		return (cur_hs->value);
	while (cur_hs)
	{
		if (strcmp(cur_hs->key, key) == 0)
			return (cur_hs->value);
		cur_hs = cur_hs->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the sorted content of table
 * @ht: table to print from
 */
void shash_table_print(const shash_table_t *ht)
{
	int is_first = 1;
	shash_node_t *cur_hs = NULL;

	if (ht == NULL)
		return;
	printf("{");

	cur_hs = ht->shead;
	while (cur_hs)
	{
		if (is_first)
			printf("'%s': '%s'", cur_hs->key, cur_hs->value);
		else
			printf(", '%s': '%s'", cur_hs->key, cur_hs->value);
		is_first = 0;

		cur_hs = cur_hs->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the reverse sorted content of table
 * @ht: table to print from
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int is_first = 1;
	shash_node_t *cur_hs = NULL;

	if (ht == NULL)
		return;
	printf("{");

	cur_hs = ht->stail;
	if (cur_hs->next)
		cur_hs = cur_hs->next;
	while (cur_hs)
	{
		if (is_first)
			printf("'%s': '%s'", cur_hs->key, cur_hs->value);
		else
			printf(", '%s': '%s'", cur_hs->key, cur_hs->value);
		is_first = 0;

		cur_hs = cur_hs->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	lu_int size = ht->size, i;
	shash_node_t *cur_hs = NULL, *next_hs = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		cur_hs = ht->array[i];
		while (cur_hs)
		{
			next_hs = cur_hs;
			cur_hs = cur_hs->next;
			free_snode(next_hs);
		}
		free_snode(cur_hs);
	}
}
