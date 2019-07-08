#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: The pointer.
* @accept: Number of bytes.
*
* Return: To the value of s.
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int count = 0;
unsigned int count2 = 0;
while (accept[i] != 0)
{
i++;
}
count = i;
for (j = 0; j <= count; j++)
{
for (i = 0; i < count; i++)
{
if (accept[i] == s[j])
{
count2 = count2 + 1;
}
}
}
return (count2);
}
