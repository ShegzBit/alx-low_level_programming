#include "hash_tables.h"


/**
 * key_index - transforms key to index of item in the hash table
 * @key: key to transform
 * @size: size of table to look into
 * Return: index for key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
