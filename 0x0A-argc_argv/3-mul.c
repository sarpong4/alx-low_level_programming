#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of 2 numbers from the arguments provided. If no arguments or one argument only, print Error.
 * @argc: length of arguments
 * @argv: arguments provided
 *
 * Return: (0) on success, (1) on error
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);
	return (0);
}
