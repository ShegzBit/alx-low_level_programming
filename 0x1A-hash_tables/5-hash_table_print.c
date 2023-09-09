#include "hash_tables.h"

/**
 * hash_table_print - prints all pairs in hash table ht
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	lu_int i;
	hash_node_t *cur_hs = NULL;
	int is_print = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		cur_hs = ht->array[i];

		while (cur_hs != NULL)
		{
			if (!is_print)
				printf("%s: %s", cur_hs->key, cur_hs->value);
			else
				printf(", %s: %s", cur_hs->key, cur_hs->value);
			is_print = 1;

			cur_hs = cur_hs->next;
		}
	}
	printf("}\n");
}
