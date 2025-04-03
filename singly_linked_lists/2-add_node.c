#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - adds a new node at the begining of a list
 *@head: pointer to the list_k
 *@str: string
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0; /*pointer*/

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	new->str = strdup(str);
	new->len = i;
	new->next = *head;/*linking new node to previous node*/
	*head = new; /*return pointer to new element*/

	return (new);
}
