#include "lists.h"
/**
 * add_nodeint - adds a new node at list start
 * @head: pointer to head pointer
 * @n: int to create
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_Node;

	if (head == NULL)
		return (0);

	nw_Node = malloc(sizeof(listint_t));
	if (nw_Node == NULL)
		return (NULL);
	if (*head == NULL)
		nw_Node->next = NULL;
	else
		nw_Node->next = *head;
	nw_Node->n = n;
	*head = nw_Node;

	return (*head);
}
