#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: A pointer to the head pointer of the list
 *
 * Description: This function frees a listint_t list and sets the head pointer
 * to NULL, ensuring that the list is completely freed and no longer accessible.
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
