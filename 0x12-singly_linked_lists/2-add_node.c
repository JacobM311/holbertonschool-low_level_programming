#include "main.h"

/**
 * add_node - adds node to the end of linked list
 * @head: pointer to the current node
 * @str: str to copy into the new head
 * Return: address of new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	list_s *newnode;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	str_dup = strdup(str_dup);
	if (str_dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	len = _strlen(str_dup);

	newnode->str = str_dup;
	newnode->len = len;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
