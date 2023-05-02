#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *lmou, *lmou6;

	if (*head == NULL)
		return (-1);

	lmou = *head;

	if (index == 0)
	{
		*head = lmou->next;
		free(lmou);
		return (1);
	}

	while (i < (index - 1) && lmou != NULL)
	{
		lmou = lmou->next;
		i++;
	}

	if (i != (index - 1) || lmou->next == NULL)
		return (-1);

	lmou6 = lmou->next;
	lmou->next = (lmou->next)->next;
	free(lmou6);

	return (1);
}
