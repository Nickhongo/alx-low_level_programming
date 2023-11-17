#include "lists.h"
/**
 * *add_node_end - add node to the end
 * @head: start of the node
 * @str:number of nodes
 * Return: number o nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new_node = make_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
/**
 * *make_node - make a new node
 * @str: string
 * Return:new node
 */
list_t *make_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = len(str);
	return (new_node);
}
/**
 * len - length
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
