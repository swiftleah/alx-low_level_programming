#include "lists.h"
/**
 * free_listint2 - frees linked list listint_t
 * @head: double pointer to head node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

