#include "lists.h"

/**
* listint_len - lists the elements in a linked list
* @h: head of linked list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count_elements = 0;

		while (h != NULL)
		{
			h = h->next;
			count_elements++;
		}

		return (count_elements);
}
