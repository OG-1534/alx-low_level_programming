#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list
 * @head: head node
 * @index: new node index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1;
	dlistint_t *p2;
	unsigned int x = 0;

	p1 = *head;

	if (p1 != NULL)
		while (p1->prev != NULL)
			p1 = p1->prev;

	while (p1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = p1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				p2->next = p1->next;

				if (p1->next != NULL)
					p1->next->prev = p2;
			}

			free(p1);
			return (1);
		}
		p2 = p1;
		p1 = p1->next;
		x++;
	}

	return (-1);
}
