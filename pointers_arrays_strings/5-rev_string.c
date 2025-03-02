#include "main.h"
#include <stdio.h>

/**
 * rev_string -  a function that reverses a string.
 * @s: string to be reversed.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length = 0;
    	int i;
    	char temp;
    	char *end = s;

    	/* Calculate string length */
    	while (end[length] != '\0') {
        	length++;
    	}

    	/* Move end pointer to the last character */
    	end = s + length - 1;

    	/* Swap characters */
    	for (i = 0; i < length / 2; i++) {
        	temp = s[i];
        	s[i] = *end;
        	*end = temp;
        	end--;
    	}
}
