#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
