#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a linked list
 * @head: pointer to first nodee
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}