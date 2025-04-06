#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint -adds a new node at the beginning of a list
 *@head: const dlistint_t
 *@n: int
 *Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistsint_t *newNode;

	/**create a new node**/
	newNode = malloc(sizeof(dlistsint));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	/**point to the head node**/
	newNode->next = *head;
}
