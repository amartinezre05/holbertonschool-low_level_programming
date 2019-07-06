#include "holberton.h"

/**
* rot13 - Changes values of the string.
* @s: The pointer.
*
* Return: To the value of s.
*/
char *rot13(char *s)
{
int i;
int j;
char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; let[j] != '\0'; j++)
{
if (let[j] == s[i])
{
s[i] = rep[j];
}
}
}
return (s);
}
