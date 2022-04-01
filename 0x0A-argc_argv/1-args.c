#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prits number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
