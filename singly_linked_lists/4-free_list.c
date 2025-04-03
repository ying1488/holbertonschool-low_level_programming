#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_list - frees a list
 *@head: head
 *Return: new list
 */

void free_list(list_t *head)
{
	list_t *free_list_temp;

	while(head != NULL)
	{
		free_list_temp = head;
		head = head->next;
		free(free_list_temp->str);
		free(free_list_temp);
	}
}
