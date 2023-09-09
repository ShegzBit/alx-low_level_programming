#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");
    hash_table_set(ht, "hetairas", "goddess");
    hash_table_set(ht, "mentioner", "@mentions");
    hash_table_set(ht, "stylist", "Looks_cool");
    hash_table_set(ht, "joyful", "comerade");
    hash_table_set(ht, "synaphea", "don't_know:)");
    hash_table_set(ht, "redescribed", "as a coder");
    hash_table_set(ht, "urites", "god of urine");
    hash_table_set(ht, "urites", NULL);
    hash_table_set(ht, NULL, "god of urine");
    hash_table_set(ht, NULL, "god of urine");
    hash_table_print(ht);


    return (EXIT_SUCCESS);
}
