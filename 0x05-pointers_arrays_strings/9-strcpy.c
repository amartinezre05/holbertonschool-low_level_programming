#include "holberton.h"

/**
 * *_strcpy -  copies the string pointed to by src.
 * @dest: The first pointer.
 * @src: The second pointer
 *
 * Return: To the value of char.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;
i = 0;
while (src[i] != 0)
{
i++;
}
for (j = 0; j <= i + 1; j++)
{
dest[j] = src[j];
}
return (dest);
}
