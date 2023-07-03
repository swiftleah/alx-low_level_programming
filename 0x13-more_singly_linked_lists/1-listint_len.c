#include "lists.h"
/**
 * listint_len - returns number of elements in linked listint_t list
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
