#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *lkj;

	if (*head == NULL)
		return (0);

	lkj = *head;

	data = lkj->n;

	*head = lkj->next;
	free(lkj);

	return (data);

}
