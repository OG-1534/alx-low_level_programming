#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: pointer to head pointer
 * @n: int to create
 *
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *nw_Node;

	(void)temp;

	nw_Node = malloc(sizeof(listint_t));
	if (nw_Node == NULL)
		return (NULL);

	nw_Node->n = n;
	nw_Node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = nw_Node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nw_Node;
	}
	return (*head);
}
