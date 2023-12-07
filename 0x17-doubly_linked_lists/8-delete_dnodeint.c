#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (current == NULL) {
        return (-1);
    }

    // Find the node at the given index
    for (i = 0; i < index && current != NULL; i++) {
        current = current->next;
    }

    if (i != index || current == NULL) {
        return (-1);
    }

    // Remove the node from the list
    if (current == *head) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    } else {
        current->prev->next = current->next;
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
    }

    // Free the deleted node
    free(current);

    return (1);
}
