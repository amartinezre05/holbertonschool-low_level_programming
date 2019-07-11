#include "holberton.h"

/**
* _atoi -  Convert a string to an integer.
* @s: The pointer
*
* Return: To the value of int.
*/
int _atoi(char *s)
{
int i;
int j;
int n;
i = 0;
j = 0;
n = 0;
while (s[i] != 0)
{
j = s[i];
if (j <= 9 && j >= 0)
{
n = j;
}
i++;
}
return (i);
}
