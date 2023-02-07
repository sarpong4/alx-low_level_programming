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
 * _str_reverse - reverses the given string.
 * @s: The string to be reversed.
 *
 * Return: char *.
 */
char *_str_reverse(char *s)
{
	if (*s)
		return (_str_reverse(s + 1) + *s);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	/*int x;*/
	char *rev;

	/*x = find_strlen(s);*/
	
	if (!*s)
		return (0);
	
	rev = _str_reverse(s);
	
	return (find_strlen(rev));
}
