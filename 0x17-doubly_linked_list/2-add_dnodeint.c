#include "lists.h"

/**
 * add_dnodeint - add new node at begining
 * @head: head of the list
 * @n: value of element
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	i = *head;
	if (i != NULL)
	{
		while (i->prev != NULL)
			i = i->prev;
	}
	new->next = i;
	if (i != NULL)
		i->prev = new;
	*head = new;
	return (new);
}
