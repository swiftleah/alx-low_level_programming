#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at specified position
 * @head: double pointer to head node
 * @idx: index of list where new node should be added
 * @n: data
 *
 * Return: address of new node or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = NULL;
	listint_t *current = *head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newnode = (listint_t *)malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}

		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (NULL);
	}

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
