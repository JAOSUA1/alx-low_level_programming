#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */



size_t print_list(const list_t *h)

{
	size_t numel;

	numel = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numel++;
	}
	return (numel);
}
