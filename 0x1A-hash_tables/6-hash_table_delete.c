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
	hash_node_t *to_remove, *node;
	hash_table_t *table = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			to_remove = ht->array[i];
			while (to_remove != NULL)
			{
				node = to_remove->next;
				free(to_remove->key);
				free(to_remove->value);
				free(to_remove);
				to_remove = node;
			}
		}
	}
	free(table->array);
	free(table);
}
