#include "lists.h"

/**
 * add_node_end - add a new head node at the tail of the list_t list
 * @head: pointer to the current head
 * @str: String to copy into new head
 * Return: address of new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	char *cpyString;
	list_t *newNode, *lastNode;
	int length = 0;

	newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			return (NULL);

	cpyString = strdup(str);
	if (cpyString == NULL)
	{
		free(newNode);
		return (NULL);
	}
	length = _strlen(cpyString);
	newNode->str = cpyString;
	newNode->len = length;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}

/**
 * _strlen - Entry point
 * @s: Point to the string
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
return (i);
}
