#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd, *temp;
	size_t nch;

	nd = malloc(sizeof(list_t));
	if (nd == NULL)
		return (NULL);
	nd->str = strdup(str);
	for (nch = 0; str[nch]; nch++)
		;
	nd->len = nch;
	nd->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = nd;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nd;
	}
	return (*head);
}
