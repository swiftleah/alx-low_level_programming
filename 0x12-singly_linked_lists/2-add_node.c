#include "lists.h"
/**
 * add_node - adds node at beginning of list_t list
 * @head: double pointer to head of list
 * @str: pointer to string
 *
 * Return: new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;

	return (new);
}
