#include "holberton.h"
#include <stdio.h>
/**
* print_array - Print an array..
* @n: The number of elements.
* @a: The pointer.
*
* Return: To the value of void..
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i <= n - 2)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
