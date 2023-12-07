#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
