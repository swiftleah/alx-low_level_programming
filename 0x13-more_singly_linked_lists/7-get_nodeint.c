#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to head node
 * @index: index of node, starting at 0
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}

