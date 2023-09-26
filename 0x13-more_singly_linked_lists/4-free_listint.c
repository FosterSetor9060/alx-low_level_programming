#include "lists.h"

/**
 * free_listint - freeing a linked list
 * @head: listint_t list always to be freed instantly
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

