#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: returns NULL or a newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
	{
		return (NULL);
	}
	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	if (!hash_table->array)
	{
		free(hash_table);
	}
	return (hash_table);
}
