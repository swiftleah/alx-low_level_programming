#include "lists.h"
/**
 * pop_listint - deletes head node of linked list listint_t
 * @head: double pointer to head node
 *
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (data);
}

