#include <stdio.h>

/**
 * print_args - prints recursively the arguments, each per line
 * @args: the array of arguments to be printed
 * @i: starting index
 * @end: length of the array
 *
 * Return: null
 */

void print_args(char *args[], int i, int end)
{
	if (i != end)
	{
		printf("%s\n", args[i]);
		print_args(args, i + 1, end);
	}
}

/**
 * main - prints all arguments provided
 * @argc: Number of arguments provided
 * @argv: Arguments provided
 *
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	print_args(argv, 0, argc);
	return (0);
}
