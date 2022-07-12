#include "lists.h"

/**
 * print_listint - prints list of listint_t int
 * @h: pointer to int to be printed
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
