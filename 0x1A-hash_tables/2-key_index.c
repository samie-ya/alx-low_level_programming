#include "hash_tables.h"

/**
* key_index- this function is used to find the index of the key
*
* @key: the key of the node
*
* @size: size of the array
*
* Return: the remainder of the hash function divided by size
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
