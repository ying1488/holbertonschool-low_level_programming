#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - reutrns sum of all data
 *@head: dlistint_t
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);

}
