#include "lists.h"
/**
 * print_listint - prints all the elementss of a list
 * @h: points to the lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t new_node = 0;

	while (h == NULL)
	{
		printf("%d\n", h->n);
		new_node++;
	}
	new_node = h->n;
       	h= h->next;

	return (new_node);
}

