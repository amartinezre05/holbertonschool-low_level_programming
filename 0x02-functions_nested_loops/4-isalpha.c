#include "holberton.h"
/**
 * Prototype - _isalpha(int c)
 *
 * Return 1 if c is a letter and 0 if not.
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
