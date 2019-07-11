#include "holberton.h"

/**
* _puts_recursion - prints a string.
* @s: The pointer to a string.
*
* Return: To the value of void.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
