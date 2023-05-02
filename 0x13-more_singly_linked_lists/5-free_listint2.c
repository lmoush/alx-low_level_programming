#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *lkj;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		lkj = *head;
		*head = lkj->next;
		free(lkj);
	}

}
