#include "holberton.h"

/**
* *_strncat - Concatenates two strings.
* @dest: The first pointer.
* @src: The second pointer.
* @n: Number of bytes.
*
* Return: To the value of dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
