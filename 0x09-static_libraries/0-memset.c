#include "holberton.h"

/**
* _memset - function fills the first n bytes of the memory area.
* @s: The pointer.
* @b: Char to replace.
* @n: Number of bytes.
*
* Return: To the value of s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
