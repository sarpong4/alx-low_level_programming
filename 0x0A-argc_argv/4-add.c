#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * all_nums - checks if all arguments are nums
 * @args: the array of arguments to be checked
 * @i: starting index
 * @end: length of the array
 * @status: the value to be returned,
 *
 * Return: 1 if all are nums, 0 otherwise
 */

int all_nums(char *args[], int i, int end, int status)
{
	if (i != end)
	{
		if (atoi(args[i]) != 0)
			status += 1;:
		print_args(args, i + 1, end);
	}
	return (status == end - 1);
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
