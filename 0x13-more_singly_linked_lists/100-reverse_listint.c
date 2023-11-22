#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: points to a list
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur_node, *prev_node;

	cur_node = *head;
	prev_node = NULL;

	while (cur_node != NULL)
	{
		*head = cur_node->next;
		cur_node->next = prev_node;
		prev_node = cur_node;
		cur_node = *head;
	}
	*head = prev_node;
	return (*head);
}
