#include "lists.h"
/**
 * sum_dlistint - returns sum of all data of doubly linked list
 * @head: pointer to head node
 * Return: sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
