#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: points the next node
 *
 * Description: singly linked lists
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%lu] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, h->str);
	return (i);
}
