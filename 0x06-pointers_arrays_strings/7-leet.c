#include "holberton.h"

/**
* leet - Chances values in a string.
* @s: The pointer.
*
* Return: To the value of s.
*/
char *leet(char *s)
{
int i;
int j;
char let[] = "aeotlAEOTL";
char num[] = "4307143071";
for (i = 0; s[i] != 0; i++)
{
for (j = 0; let[j] != 0; j++)
{
if (let[j] == s[i])
{
s[i] = num[j];
}
}
}
return (s);
}
