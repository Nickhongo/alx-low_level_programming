#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: poiter to the list
 * @index: index o node to be delleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i;
	
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
