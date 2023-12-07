#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: head node
 * @index: nth node index
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}

	return (head);
}
