#include "holberton.h"

/**
 * _isdigit - Return a value if the character is a digit or not.
 * @c: The character to be printed
 *
 * Return: To the value of c.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
return (c);
}
