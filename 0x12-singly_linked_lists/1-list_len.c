#include "lists.h"

/**
 * list_len - finds the number of elements in list_t
 * @h: function pointer
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
