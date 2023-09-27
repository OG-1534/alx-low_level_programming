#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
