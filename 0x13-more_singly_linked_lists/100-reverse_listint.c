#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: points to a list
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (tmp == NULL)
			return (*head);
		*head = tmp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
