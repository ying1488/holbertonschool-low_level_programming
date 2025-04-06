#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head:dlistint_t
 *@n:int
 *Return: address of new element
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	/**create a new node**/
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	/**point to the end of node**/
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/*put new node at the end*/
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
