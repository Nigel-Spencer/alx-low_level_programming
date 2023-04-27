#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments
 * @argc: The number of arguments
 * @argv: The argument vector
 *
 * Return: On success always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
