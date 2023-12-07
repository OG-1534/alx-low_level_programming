#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: head node
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
