#include "lists.h"
/**
 * get_nodeint_at_index - returnns the nth node of a linked list
 * @head: points to the start of the list
 * @index: index of node starting from 0
 * Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
