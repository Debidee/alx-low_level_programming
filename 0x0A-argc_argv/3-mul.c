#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");

		return (0);
	}
	else
	{
	       printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
}
