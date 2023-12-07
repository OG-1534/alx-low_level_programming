#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: head node
 * @idx: new node index
 * @n: new node value
 *
 * Return: new node address, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *nw;
	unsigned int x;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = head->next;
						nw->prev = head;
						head->next->prev = nw;
						head->next = nw;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}

	return (nw);
}
