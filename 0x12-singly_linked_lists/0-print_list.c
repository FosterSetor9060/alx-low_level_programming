#include <stdio.h>
#include "lists.h"

/**
 * Print list - Prints all the elements of a list_t list.
 * @h: A pointer to the top most list
 *
 * Return: The nodes show the number of list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		node_count++;
		h = h->next;
	}

	return (node_count);
}

