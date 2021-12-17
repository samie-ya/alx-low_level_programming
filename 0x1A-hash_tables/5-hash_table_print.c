#include "hash_tables.h"

/**
* hash_table_print- is used to print the hast table
*
* @ht: teh array of hast table
*
* Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int j = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			j = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
