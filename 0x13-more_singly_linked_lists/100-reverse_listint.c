#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head pointer
 *
 * Return: pointer to first node
 * of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *n_temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		n_temp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (n_temp == NULL)
			return (*head);
		*head = n_temp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
