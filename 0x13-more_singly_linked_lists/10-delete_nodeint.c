#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index of linked list
 * @head: double pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);

	return (1);
}
