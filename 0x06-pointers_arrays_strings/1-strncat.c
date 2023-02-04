#include "main.h"

/**
 * _strncat - concatenate string
 * @dest: first string
 * @src: second string
 * @n: iterating times
 *
 * Description: concatenate two strings
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int it1;
	int it2;

	it1 = 0;
	it2 = 0;

	while (dest[it1] != 0)
	{
		it1++;
	}

	while (src[it2] != 0 && it2 < n)
	{
		dest[it1] = src[it2];
		it1++;
		it2++;
	}
	return (dest);
}
