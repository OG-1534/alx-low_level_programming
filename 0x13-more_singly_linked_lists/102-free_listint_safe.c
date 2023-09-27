#include "lists.h"

/**
 * free_listss - free link list
 * @head: head
 *
 * Return: no return
 */
void free_listss(lists_t **head)
{
	lists_t *temp;
	lists_t *now;

	if (head != NULL)
	{
		now = *head;
		while ((temp = now) != NULL)
		{
			now = now->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list
 * @h: pointer to head
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	lists_t *ptr, *new, *plus;
	listint_t *now;
	size_t node = 0;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(lists_t));

		if (new == NULL)
			exit(98);

		new->d = (void *)*h;
		new->next = ptr;
		ptr = new;

		plus = ptr;

		while (plus->next != NULL)
		{
			plus = plus->next;
			if (*h == plus->d)
			{
				*h = NULL;
				free_listss(&ptr);
				return (node);
			}
		}

		now = *h;
		*h = (*h)->next;
		free(now);
		node++;
	}

	*h = NULL;
	free_listss(&ptr);
	return (node);
}
