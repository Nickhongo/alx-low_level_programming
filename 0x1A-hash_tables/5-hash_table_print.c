#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int first = 1;
	unsigned long int i;
	hash_node_t *current;
	
	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s' ", current->key, current->value);
			first = 0;

			current = current->next;
		}
	}
	printf("}\n");
}
