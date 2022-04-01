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
	int mul = 0;

	if (argc < 2 || argc > 3)
	{
		printf("Error\n");

		return (0);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);

		return (0);
	}
}
