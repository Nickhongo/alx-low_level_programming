#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: start of the list
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	new_node->next = NULL;
	temp->next = new_node;
	return (new_node);
}
