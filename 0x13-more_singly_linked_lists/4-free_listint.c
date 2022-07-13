#include "lists.h"

/**
 * free_listint - free memory of listint_t list.
 * @head: pointer to head of list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
