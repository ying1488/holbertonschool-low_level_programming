#include <stdlib.h>
#include "lists.h"

/**
 *list_len - functions that returns the number of elements
 *@h: pointer to the list_k
 *Return: number of elements
 */ 

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number ++;
		h = h->next;
	}

	return (number);

}
