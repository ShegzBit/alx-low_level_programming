#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    const unsigned char *key = "betty", *key2 = "hetairas";
    int index = key_index(key, 1024);

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "unknown");
    hash_table_set(ht, "mentioner", "cool");
    printf("%s\n", ht->array[index]->value);
    index = key_index(key2, 1024);
    printf("%s\n", ht->array[index]->next->value);
    hash_table_set(ht, "mentioner", "Now cooler");
    printf("%s\n", ht->array[index]->next->value);
    hash_table_set(ht, "betty", "once cool");
    index = key_index(key, 1024);
    printf("%s\n", ht->array[index]->value);
    return (EXIT_SUCCESS);
}
