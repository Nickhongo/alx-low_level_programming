#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: points the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		new_node++;
	}
	return (count);
}
