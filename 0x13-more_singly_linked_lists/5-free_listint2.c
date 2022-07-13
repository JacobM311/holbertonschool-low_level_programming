#include "lists.h"

/**
 * free_listint2 - same thing as the first one
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
