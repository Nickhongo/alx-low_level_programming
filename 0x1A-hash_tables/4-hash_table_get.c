#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: NULL or new key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
