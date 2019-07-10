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
<<<<<<< HEAD
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
=======
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
>>>>>>> a05caef1761b747d27353a16c664f08e11fbec9f
}
