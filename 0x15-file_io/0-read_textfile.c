#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* read_textfile - function that reads a text file and prints it to the standard output.
* @filename: The file.
* @letters: Number of letters.
*
* Return: The number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

