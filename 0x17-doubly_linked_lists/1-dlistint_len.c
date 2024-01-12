#include "lists.h"

/**
 * dlistint_len - retuens number of elements in a linked list
 * @h: points to the elements
 * Return: returns the new nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t new_node = 0;

	while (h != NULL)
	{
		h = h->next;
		new_node++;
	}
	return (new_node);
}
