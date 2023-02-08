#include <stdio.h>

/**
 * main - printss the name of this program
 * @argc: number of arguments passed into main
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */

int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
