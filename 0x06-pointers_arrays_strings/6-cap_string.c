#include "holberton.h"

/**
* cap_string - Capitalizes all words of a string..
* @s: The pointer.
*
* Return: To the value of s.
*/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 9)
{
s[i] = 32;
}
if (s[i] == 32 ||
	s[i] == 44 ||
	s[i] == 59 ||
	s[i] == 46 ||
	s[i] == 33 ||
	s[i] == 63 ||
	s[i] == 34 ||
	s[i] == 40 ||
	s[i] == 41 ||
	s[i] == 123 ||
	s[i] == 125 ||
	s[i] == 10)
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
continue;
}
}
return (s);
}
