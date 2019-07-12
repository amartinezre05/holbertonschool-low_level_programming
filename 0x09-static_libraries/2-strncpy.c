#include "holberton.h"

/**
* _strncpy - Concatenates two strings.
* @dest: The first pointer.
* @src: The second pointer.
* @n: Number of bytes.
*
* Return: To the value of dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; (i < n && src[i] != '\0'); i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
