#include "holberton.h"

/**
* cap_string - Capitalizes all words of a string..
* @s: The pointer.
*
* Return: To the value of s.
*/
char *cap_string(char *s)
{
int j;
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (j == 0 && (s[j] >= 'a' && s[j] <= 'z'))
{
s[j] -= 32;
}
if (s[j] == 9)
{
s[j] = 32;
}
if (s[j] == 32 ||
	s[j] == 44 ||
	s[j] == 59 ||
	s[j] == 46 ||
	s[j] == 33 ||
	s[j] == 63 ||
	s[j] == 34 ||
	s[j] == 40 ||
	s[j] == 41 ||
	s[j] == 123 ||
	s[j] == 125 ||
	s[j] == 10)
{
if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
{
s[j + 1] -= 32;
}
}
}
s[j] = '\0';
return (s);
}
