#include "lists.h"
/**
 * reverse_listint - reverses listint_t linked list
 * @head: double pointer to head node
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;

	return (*head);
}
