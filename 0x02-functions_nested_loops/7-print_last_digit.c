#include "holberton.h"
/**
 * Return the last digit of a number
 *
 */
int print_last_digit(int r)
{
int end = r % 10;
if (end < 0)
{	
end = end * -1;
_putchar(end + '0');
return (end);
}
}
