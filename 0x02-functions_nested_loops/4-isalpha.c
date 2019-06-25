#include "holberton.h"
/**
 * _isalpha - Return a value if the letter is upper or lowercase.
 * @c: The first character to be evalue
 *
 * Return: To the value of 0
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
