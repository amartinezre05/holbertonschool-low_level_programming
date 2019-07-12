#include "holberton.h"

/**
* _memcpy -  function copies n bytes from memory area src to memory area dest.
* @dest: The pointer to dest.
* @src: The pointer to src..
* @n: Number of bytes.
*
* Return: To the value of dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
while (j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
