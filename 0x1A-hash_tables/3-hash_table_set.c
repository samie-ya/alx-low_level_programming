#include "hash_tables.h"

/**
* hash_table_set- this function is used to add element to hash table
*
* @ht: hash table used
*
* @key: key of node
*
* @value: the value that represents teh key
*
* Return: 1 if succeed else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *node;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new_value == NULL)
		return (0);
	new->key = strdup(key);
	new_value = strdup(value);
	new->value = new_value;
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		new->next = NULL;
		ht->array[index] = new;
		return (1);
	}
	else
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = new_value;
			return (1);
		}
		else
		{
			ht->array[index] = new;
			new->next = node;
			return (1);
		}
	}
	return (0);
}
