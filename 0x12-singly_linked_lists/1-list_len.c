#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the number of linked list returned
 *
 * Return: Number Of Elements i n h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

