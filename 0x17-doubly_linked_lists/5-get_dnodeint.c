#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: begins a list
 * @index: unsigned integer
 * Return: returns nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
	head = head->next;
	}
	return (head);
}
