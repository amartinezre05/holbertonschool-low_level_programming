#include "holberton.h"

/**
 * print_triangle - Print a triangle with #.
 * @size: Is the size of the square.
 *
 * Return: To the value of void..
 */
void print_triangle(int size)
{
int i;
int j;
int x;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
_putchar(' ');
}
for (x = size + i; x > size - 1; x--)
{
_putchar('#');
}
_putchar('\n');
}
}
