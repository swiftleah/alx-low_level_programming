#include "lists.h"
/**
 * print_list - prints elements of list_t list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n",strlen(h->str), h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
