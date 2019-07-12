#include "holberton.h"

/**
* _strstr - function finds the first occurrence of the substring.
* @haystack: The pointer.
* @needle: substring.
*
* Return: To the value char.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int aux = 0;
int aux2 = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		aux2 = 0;
		if (haystack[i] == needle[0])
		{
		aux = i;
			while (haystack[aux] == needle[aux2])
			{
			aux++;
			aux2++;
			}
		}
		if (needle[aux2] == '\0')
		{
		return (haystack + i);
		}
	}
	if (needle[0] == '\0')
	{
	return (haystack);
	}
return (0);
}
