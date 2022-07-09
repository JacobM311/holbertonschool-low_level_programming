#include "lists.h"

/**
 * add_node - adds node to the end of linked list
 * @head: pointer to the current node
 * @str: str to copy into the new head
 * Return: address of new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	list_t *newnode;
	int length = 0;

	newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	length = _strlen(str_dup);

	newnode->str = str_dup;
	newnode->len = length;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
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
