#include <stdlib.h>
#include"list.h"

/**
 * Struct listint_s - more singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Inscription: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;

	struct listint_s *next;
} listint_t;

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *node = h;
	while (node != NULL)
	{
		counter++;
		node = node->next;
	}
  
	return counter;
}
