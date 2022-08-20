#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: key to find the index.
 * @size: size of the array of the hash table.
 * Return: index which key/value should be stored in array hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
