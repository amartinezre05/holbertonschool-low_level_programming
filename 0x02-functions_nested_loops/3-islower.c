#include "holberton.h"
/**
 * _islower - Return a value.
 * @c: The first character to be evalue
 *
 * Return: To the value of n
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
