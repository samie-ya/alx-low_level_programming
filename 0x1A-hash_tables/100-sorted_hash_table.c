#include "hash_tables.h"

/**
* shash_table_create- creating hash table for PHP
*
* @size: the size of the array
*
* Return: the hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL);
		return (NULL);
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
* shash_table_set- function to assign key and value their place
*
* @ht: the pointer to table
*
* @key: the key of the node
*
* @value: the value of the key
*
* Return: 1 if success else 0.
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *node;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
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
			free(node->key);
			free(node->value);
			free(node);
			new->next = NULL;
			ht->array[index] = new;
			return (1);
		}
		else
		{
			new->next = node;
			ht->array[index] = new;
			return (1);
		}
	}
	return (0);
}
