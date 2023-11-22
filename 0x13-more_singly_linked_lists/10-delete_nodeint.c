#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: poiter to the list
 * @index: index o node to be delleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	prev = NULL;
	for (i = 0; tmp != NULL && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
