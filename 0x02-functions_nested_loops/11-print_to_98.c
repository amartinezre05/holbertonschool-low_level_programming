#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Print a list the numbers until 98
 * @n: The first character to be printed
 *
 * Return: To the value of n
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
if (i != 98)
{

}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
_putchar('\n');
}
