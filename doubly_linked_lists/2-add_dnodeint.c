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
	dlistint_t *newNode;

	/**create a new node**/
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	/**point to the head node**/
	newNode->next = *head;

	/*If the list is not empty. set prev pointer of old head*/

	if(*head != NULL)
	{
		(*head)->prev = newNode;
	}

	newNode->prev = NULL;
	/**Updates the original head pointer to now point to the newNode*/
	/**makes newNode the new head of the list.*/
	*head = newNode;

	return (newNode);
}
