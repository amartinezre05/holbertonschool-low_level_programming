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
while (haystack[i])
{
	if (haystack[i] == needle[j])
	{
		j++;
		if (needle[j] == 0)
		{
			return (haystack + i - (j - 1));
		}
	break;
	}
	else
	{
		j = 0;
	}
i++;
}
if (needle[0] == 0)
{
return (haystack);
}
return (0);
}
