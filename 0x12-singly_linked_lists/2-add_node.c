#include "lists.h"
/**
 * *add_node - adds new node
 * @head: start of the node
 * @str: string to be added
 * Return: start of the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	return (*head);
}
/**
 * len - prints length
 * @str: string
 * Return: length
 */
int len(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
