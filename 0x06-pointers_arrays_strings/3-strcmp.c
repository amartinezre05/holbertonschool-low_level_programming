#include "holberton.h"

/**
* _strcmp - Compares two strings.
* @s1: The first char.
* @s2: The second char.
*
* Return: To the value of int.
*/
int _strcmp(char *s1, char *s2)
{
int n = 0;
int i = 0;
for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
{
if (s1[i] != s2[i])
{
n = s1[i] - s2[i];
break;
}
}
return (n);
}
