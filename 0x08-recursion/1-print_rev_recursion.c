#include "holberton.h"

/**
* _print_rev_recursion - prints a string in reverse.
* @s: The pointer to a string.
*
* Return: To the value of void.
*/
void _print_rev_recursion(char *s)
{
	s++;
	if (*s != '\0')
	{
	_print_rev_recursion(s);
	}
	_putchar(*(s - 1));
}
