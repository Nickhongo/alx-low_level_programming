#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_list
 * @h: points to the list
 * Return: returns new node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
