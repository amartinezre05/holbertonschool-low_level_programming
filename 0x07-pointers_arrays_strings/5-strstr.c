#include "holberton.h"
#include <stdio.h>

/**
* _strstr - function finds the first occurrence of the substring.
* @haystack: The pointer.
* @needle: substring.
*
* Return: To the value of haystack.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int cont = 0;
int k = 0;
for (i = 0; haystack[i] != 0; i++)
{
	for (j = 0; needle[j] != 0; j++)
	{	
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i] == needle[j])
			{
			cont = cont + 1;
			i++;
			j++;
			}
		}
	break;
	}
	return (haystack + k);
	if (*needle == '\0')
	{
		return (haystack + i);
	}
}
{
	return (haystack + k);
}
