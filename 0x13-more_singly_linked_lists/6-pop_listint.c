#include "lists.h"

/**
 *pop_listint - Deletes the head node of a listint_t linked list and returns its data (n).
 *@head: A pointer to the head pointer of the list
 *Return: The data (n) of the deleted head node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *kjh;

	if (*head == NULL)
		return (0);

	kjh = *head;

	data = kjh->n;

	*head = kjh->next;
	free(kjh);

	return (data);

}
