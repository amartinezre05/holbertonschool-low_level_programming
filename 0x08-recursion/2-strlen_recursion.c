#include "holberton.h"

/**
* _strlen_recursion -  returns the length of a string.
* @s: The pointer to a string.
*
* Return: To the value of int.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
return (1 + _strlen_recursion(s + 1));
}
