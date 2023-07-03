#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of listint_t linked list
 * @head: double pointer to head node
 * @n: int
 *
 * Return: address of new element, NULL upon failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *current;

	endnode = (listint_t *)malloc(sizeof(listint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = endnode;
	}

	return (endnode);
}
