#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: head notes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		*head = (*head)->next;
		value = temp->n;
		free(temp);
	}
return (value);
}
