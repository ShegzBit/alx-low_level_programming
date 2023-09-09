#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

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
    

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);

    value = hash_table_get(ht, "hetairas");
    printf("%s:%s\n", "hetairas", value);

    value = hash_table_get(ht, "mentioner");
    printf("%s:%s\n", "mentioner", value);

    value = hash_table_get(ht, "stylist");
    printf("%s:%s\n", "stylist", value);

    value = hash_table_get(ht, "subgenera");
    printf("%s:%s\n", "subgenera", value);

    value = hash_table_get(ht, "joyful");
    printf("%s:%s\n", "joyful", value);

    value = hash_table_get(ht, "synaphea");
    printf("%s:%s\n", "synaphea", value);

    value = hash_table_get(ht, "redescribed");
    printf("%s:%s\n", "redescribed", value);

    value = hash_table_get(ht, "urites");
    printf("%s:%s\n", "urites", value);

    value = hash_table_get(NULL, "javascript");
    printf("%s:%s\n", "testing with null hash table", value);

    value = hash_table_get(ht, "");
    printf("%s:%s\n", "Testing with empty key", value);

    value = hash_table_get(ht, NULL);
    printf("%s:%s\n", "Testing with null key", value);

    return (EXIT_SUCCESS);
}
