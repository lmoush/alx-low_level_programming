#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head);
{
    listint_t *next_node;

    while (head != NULL)
    {
        next_node = head->next;
        free(head);
        head = next_node;
    }
}
