#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addend;
	dlistint_t *hn;

	addend = malloc(sizeof(dlistint_t));

	if (addend == NULL)
		return (NULL);
	addend->n = n;
	addend->next = NULL;
	hn = *head;

	if (hn != NULL)
	{
		while (hn->next != NULL)
			hn = hn->next;
		hn->next = addend;
	}
	else
	{
		*head = addend;
	}
	addend->prev = hn;
	return (addend);
}
