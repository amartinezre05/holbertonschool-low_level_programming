#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - Reverse the content of an array..
* @a: The first pointer.
* @n: the number of elements..
*
* Return: To the value of void.
*/
void reverse_array(int *a, int n)
{
int i;
int j = 0;
int A[100];
for (i = n - 1; i >= 0; i--)
{
A[j] = a[i];
j++;
}
for (i = 0; i < n; i++)
{
a[i] = A[i];
}
}
