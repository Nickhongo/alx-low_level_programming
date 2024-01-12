#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * list
 *
 * @head: beggining of a list
 * Return: returns 0 or 1
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
