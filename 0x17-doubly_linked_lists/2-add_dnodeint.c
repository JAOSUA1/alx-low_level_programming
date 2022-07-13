#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addit;
	dlistint_t *hn;

	addit = malloc(sizeof(dlistint_t));

	if (addit == NULL)
		return (NULL);
	addit->n = n;
	addit->prev = NULL;
	hn = *head;
	if (hn != NULL)
	{
		while (hn->prev != NULL)
			hn = hn->prev;
	}
	addit->next = hn;
	if (hn != NULL)
		hn->prev = addit;
	*head = addit;
	return (addit);
}
