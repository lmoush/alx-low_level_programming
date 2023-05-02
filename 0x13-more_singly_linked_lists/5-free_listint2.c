#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *lolo;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		lolo = *head;
		*head = lolo->next;
		free(lolo);
	}

}
