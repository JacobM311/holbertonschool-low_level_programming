#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of lisint_t list
 * @head: pointer to head of list
 * @n: int to be added to node
 * Return: address of new node or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);
}
