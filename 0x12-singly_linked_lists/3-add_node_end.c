#include "lists.h"
/**
 * add_node_end - adds node at end of list_t list
 * @head: double pointer to head of list
 * @str: pointer to string
 *
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
