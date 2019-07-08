#include "holberton.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: The pointer.
* @accept: string of bytes.
*
* Return: To the value of s.
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (j = 0; s[j] != 0; j++)
{
for (i = 0; accept[i] != 0; i++)
{
if (accept[i] == s[j])
{
return (s + j);
}
}
}
return (s + j);
}
