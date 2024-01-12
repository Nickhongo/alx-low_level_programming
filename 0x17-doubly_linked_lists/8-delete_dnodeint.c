#include "lists.h"
/**
 * delete_dnodeint_at_index -  delete node at index of a list
 * @head: beginning of a list
 * @index: index
 * Return: returns 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
