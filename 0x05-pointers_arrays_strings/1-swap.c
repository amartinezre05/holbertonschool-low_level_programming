#include "holberton.h"
/**
 * swap_int - Function to swap the value of two integers.
 * @a: The pointer.
 * @b: The pointer
 *
 * Return: To the value of void.
 */
void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
