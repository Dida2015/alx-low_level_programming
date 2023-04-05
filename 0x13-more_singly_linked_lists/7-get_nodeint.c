#include <stdlib.h>
#include "lists.h"
/*
 * @head:Pointer to the head of the list.
 * get_nodeint_at_index:Returns the nth node of a listint_t linked list.
 * @index:Index of the node, starting at 0.
 * Return:0 if the if the node does not exist
 * otherwise - Pointer to the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
