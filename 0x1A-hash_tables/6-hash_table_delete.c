#include "hash_tables.h"

/**
* hash_table_delete- to remove a hash table
*
* @ht: the hash table
*
* Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *to_remove, *node, *next;

	for (i = 0; i < ht->size; i++)
	{
		to_remove = ht->array[i];
		if (to_remove != NULL)
		{
			node = to_remove->next;
			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
			free(to_remove->key);
			free(to_remove->value);
			free(to_remove);
		}
	}
	free(ht->array);
	free(ht);
}
