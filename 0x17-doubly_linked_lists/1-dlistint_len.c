#include "lists.h"

/**
 * dlistint_len - function that returns
 * num of elements in linked dlistint_t list
 *
 * @h: head node
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (!h)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
