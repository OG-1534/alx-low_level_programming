include "lists.h"

/**
 * find_listint_loop - finds the loop
 * in a linked list
 * @head: pointer to first node
 *
 * Return: address of the node
 * where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *d2;
	listint_t *pre;

	d2 = head;
	pre = head;
	while (head && d2 && d2->next)
	{
		head = head->next;
		d2 = d2->next->next;

		if (head == d2)
		{
			head = pre;
			pre = d2;
			while (1)
			{
				d2 = pre;
				while (d2->next != head && d2->next != pre)
				{
					d2 = d2->next;
				}
				if (d2->next == head)
					break;

				head = head->next;
			}
			return (d2->next);
		}
	}
	return (NULL);
}
