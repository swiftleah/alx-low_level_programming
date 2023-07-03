#include "lists.h"
/**
 * add_nodeint - adds node at beginning of listint_t list
 * @head: double pointer to head node
 * @n: int
 *
 * Return: address of new element or NULL if failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

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
