#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *current_node = h;
    size_t node_count = 0;

    while (current_node != NULL)
    {
        node_count++;
        current_node = current_node->next;
    }

    return node_count;
}
