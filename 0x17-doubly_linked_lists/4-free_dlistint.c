#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - func that frees list
* @head: variable pointer
* Return:
*/

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}

}
