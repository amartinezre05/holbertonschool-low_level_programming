#include "holberton.h"

/**
* _strchr - Returns a pointer to the first occurrence of the character.
* @s: The pointer.
* @c: Char to replace.
*
* Return: To the value of s.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
