#include "lists.h"
/**
 * free_listint_safe - frees list listint_t
 * @h: double pointer to head node
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *nextnode = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		nextnode = current->next;
		free(count);
		count++;
		current = nextnode
	}
	*h = NULL;

	return (count);
}
