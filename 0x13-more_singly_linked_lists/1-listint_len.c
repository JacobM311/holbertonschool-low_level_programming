#include "lists.h"

/**
 * listint_len - counts length of lisint_t list
 * @h: int to count
 * Return: length.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
