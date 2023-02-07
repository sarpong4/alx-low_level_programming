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
 * @x: length of string
 *
 * Return: char *.
 */
/*void _str_reverse(char *s, int x, int i)
{
	char temp, *start, *end;

	i = 0;
	x = x - 1;
	printf("%d, %d\n", i, x);

	start = s;
	end = s;

	for (int j = 0; j < x; j++)
		end++;
	printf("%s\n", end);

	for (i = 0; i < x / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		printf("%c\n", temp);
		printf("%s\n", start);
		printf("%s\n", end);
		start++;
		end--;
	}
	printf("%s", s);
}*/

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
	printf("In main: %d\n", x);
	
	char temp, *start, *end;

	int i;
	printf("%d, %d\n", 0, x);

	start = st;
	end = st;

	for (int j = 0; j < x-1; j++)
		end++;
	printf("End: %s\n", end);

	for (i = 0; i < x / 2; i++)
	{
		temp = end;
		*end = *start;
		*start = temp;
		printf("%c\n", temp);
		printf("%s\n", start);
		printf("%s\n", end);
		start++;
		end--;
	}
	printf("%s", st);
	return (0);
}
