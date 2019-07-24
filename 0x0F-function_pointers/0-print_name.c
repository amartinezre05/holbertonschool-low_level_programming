#include "function_pointers.h"

/**
* print_name - a function that prints a name.
* @name: Variable the type char.
* @f: Pointer to a function of chars.
*
* Return: To the value of void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
	(*f)(name);
	}
}
