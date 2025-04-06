#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a list
 *@head: head
 *@index: index
 *Return: returns the nth node of a
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *getNode = head;
	unsigned int currPoint = 0;

	while (getNode != NULL)
	{
		if (currPoint == index)
			return (getNode);
		getNode = getNode->next;
		currPoint++;
	}
	return (NULL);
}
