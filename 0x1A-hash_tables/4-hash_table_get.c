#include "hash_tables.h"

/**
* hash_table_get- thsi function is used to retrieve the value of node
*
* @ht: the array
*
* @key: the string to be searched
*
* Return: the value of the node
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == ht->array[index])
		{
			node = ht->array[index];
			while (node != NULL)
			{
				if (strcmp(node->key, key) == 0)
				{
					return (node->value);
				}
				node = node->next;
			}
		}
	}
	return (NULL);
}
