#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *nw_Node;
	unsigned int k;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && temp != NULL && index != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		nw_Node = temp->next;
		free(temp);
		*head = nw_Node;
	}
	else
	{
		if (temp->next == NULL)
			nw_Node = temp->next;
		else
			nw_Node = temp->next->next;
		free(temp->next);
		temp->next = nw_Node;
	}
	return (1);
}
