#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	
	return (len);
}

/**
 * is_palindrome - checks if a string is a palindrom.
 * @s: The string to be checked.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int x;
	
	x = find_strlen(&s);
	return (x);
}
