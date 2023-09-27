#include "lists.h"

/**
 * make_nw_Node - make new node
 * @n: node data
 *
 * Return: node pointer
 */
listint_t *make_nw_Node(int n)
{
	listint_t *nw_Node;

	nw_Node = malloc(sizeof(listint_t));
	if (nw_Node == NULL)
		return (NULL);
	nw_Node->n = n;
	nw_Node->next = NULL;

	return (nw_Node);
}


/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: pointer to head pointer
 * @idx: indext of position of new node
 * @n: data of new node
 *
 * Return: pointer of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *old_temp;
	listint_t *nw_Node;
	unsigned int k;

	temp = *head;
	if (head == NULL)
		return (NULL);
	nw_Node = make_nw_Node(n);
	if (nw_Node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = nw_Node;
		return (nw_Node);
	}
	if (idx == 0)
	{
		*head = nw_Node;
	}
	for (k = 0; k < idx - 1 && temp != NULL && idx != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		nw_Node->next = temp;
	else
	{
		old_temp = temp->next;
		temp->next = nw_Node;
		nw_Node->next = old_temp;
	}
	return (nw_Node);
}
