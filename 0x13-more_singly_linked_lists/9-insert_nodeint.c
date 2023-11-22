#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: points to the start of the list
 * @idx: index of the list
 * @n: integer
 * Return: null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL || idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
