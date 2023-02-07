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
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;
	return (len);
}

/**
 * _str_reverse - reverses the given string.
 * @s: The string to be reversed.
 * @i: the first index of the string
 * @x: length of string
 *
 * Return: char *.
 */
char *_str_reverse(char *s)
{
	char * res;
	while (*s != '\0')
	       s++;
	s = s- 1;
	while (*s != '\0')
	{
		res += *s;
		s--;
	}
	return res;
	
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */
/*
int is_palindrome(char *s)
{
	*int x;
	*x = find_strlen(s);
	if (!*s)
		return (0);
	
	_str_reverse(s, find_strlen(s), 0);
	
	printf("%s\n", s);
	return (find_strlen(s));
}*/

int main(void){

	char *st = "reverser";
	int x = find_strlen(st);
	printf("Before: %s\n", st);
	char *s = _str_reverse(st);
	printf("After: %s\n", s);
	return (0);
}
