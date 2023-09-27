#include "lists.h"

/**
 * free_lists - free linked list
 * @head: head
 *
 * Return: no return
 */
void free_lists(lists_t **head)
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
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	lists_t *ptr, *new, *plus;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lists_t));

		if (new == NULL)
			exit(98);

		new->d = (void *)head;
		new->next = ptr;
		ptr = new;

		plus = ptr;

		while (plus->next != NULL)
		{
			plus = plus->next;
			if (head == plus->d)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_lists(&ptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_lists(&ptr);
	return (node);
}
