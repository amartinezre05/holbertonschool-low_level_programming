#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, unsigned int size, void (*action)(int));

#endif
