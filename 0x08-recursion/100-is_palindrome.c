#include "main.h"
#include <stdio.h>

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
 * @i: the first index of the string
 * Return: char *.
 */
void _str_reverse(char *s, int i)
{
	int x;
	char temp;
	
	x = find_strlen(s);
	if (!(x % 2))
		x += 1;
	
	if ( i < x / 2)
	{
		temp = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = temp;
		_str_reverse(s,  i + 1);
	}
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

	/*x = find_strlen(s);*/
	
	if (!*s)
		return (0);
	
	_str_reverse(s, 0);
	
	printf("%s\n", s);
	return (find_strlen(s));
}
