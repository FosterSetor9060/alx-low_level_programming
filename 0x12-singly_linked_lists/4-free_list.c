#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t lists 
 * @head: A pointer to The  head of the lists compu.
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
