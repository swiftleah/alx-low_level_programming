#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to head node
 * @index: index of node to return starting from 0
 * Return: node or NULL upon failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
