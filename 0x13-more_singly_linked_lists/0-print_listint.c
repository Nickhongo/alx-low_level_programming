#include "lists.h"
/**
 * print_listint - prints all the elementss of a list
 * @h: points to the lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t newNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		newNode++;
	}
	return (newNode);
}

