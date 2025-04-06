#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *@h:pointer addr to head of list
 *@idx:index to take over
 *@n: value for the new node
 *Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int i = 0;

	/**create a new node**/
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		{return (NULL); }
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
		return (add_dnodeint (h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

		if (temp->next == NULL)
		{return (add_dnodeint_end(h, n)) ; }

		newNode->next = temp->next;
		newNode->prev = temp;

		if (temp->next)
			{temp->prev->next = newNode; }
			temp->next = newNode;
	return (newNode);
}
