#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *dlistint_len - returns the number of elements in a linked list.
 *@h: const dlistint_t
 *Return: the number of elements in a linked dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
