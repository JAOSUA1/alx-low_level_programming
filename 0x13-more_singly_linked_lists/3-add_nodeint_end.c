#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fne;
	listint_t *now;

	(void)now;
	fne = malloc(sizeof(listint_t));
	if (fne == NULL)
		return (NULL);
	fne->n = n;
	fne->next = NULL;
	now = *head;
	if (*head == NULL)
	{
		*head = fne;
	}
	else
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = fne;
	}
	return (*head);
}
