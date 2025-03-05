#include "main.h"

#include <stdio.h>

/**
 * *_strstr - search a string for any of a set of bytes
 * @haystack : source string
 * @needle: substring
 * Return: the string since the first found accepted character
 *
 */

char *_strstr(char *haystack, char *needle)
{
    int i=0; 
    
    while (haystack[i])
    {
        int j=0;
        while(needle[j])
        {
            if(haystack[i+j] != needle [j])
            {
                break;
            }
            
            j++;
        }
        if (needle[j] == '\0')
        {
            return (haystack + i);
        }
        
        i++;
    }
    return('\0');
}
