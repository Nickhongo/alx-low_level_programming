#include "lists.h"
/**
 * add_dnodeint-adds a new node at the beginning of a double
 * list
 *
 * @head: beginning of the list
 * @n: integer
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;

	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}

	*head = temp;

	return (temp);
}
