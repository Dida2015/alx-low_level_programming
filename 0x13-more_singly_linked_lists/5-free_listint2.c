#include <stdlib.h>
#include "lists.h"
/*
 * @head :pointer to the address
 * of head of listint_t list
 * free_listint2 - Frees a listint_t list
 * and sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
				tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
