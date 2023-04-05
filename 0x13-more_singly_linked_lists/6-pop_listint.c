#include <stdlib.h>
#include "lists.h"
/*
 * pop_listint:function that Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return:0 if the link is empty
 * otherwise :The head node's data (n).
 */
int pop_listint(listint_t **head)
{
		listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
