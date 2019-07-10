#include "holberton.h"

/**
* _strlen_recursion -  returns the length of a string.
* @s: The pointer to a string.
*
* Return: To the value of int.
*/
int _strlen_recursion(char *s)
{
	int a = 0;
	if (*s != '\0')
	{
	s++;
	a++;
	_strlen_recursion(s);
	}
	return (a);
}
