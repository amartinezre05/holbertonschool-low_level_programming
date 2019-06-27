#include "holberton.h"

/**
 * _isupper - Return a value if the character is upper or lowercase
 * @c: The character to be printed
 *
 * Return: To the value of c.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
return (c);
}
