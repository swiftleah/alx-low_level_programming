#include "lists.h"
/**
 * sum_listint - returns sum of all data of listint_t list
 * @head: pointer to head node
 *
 * Return: sum of all data, 0 if list is emtpy
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

        while (current != NULL)
        {
                sum += current->n;
                current = current->next;
        }
        return (sum);
}	
