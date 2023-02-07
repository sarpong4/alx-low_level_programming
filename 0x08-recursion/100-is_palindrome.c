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
 * match_with_reverse - compares s with its reverse.
 * @s: The string to be matched.
 * @l: length of the string
 *
 * Return: length of the string.
 */
int match_with_reverse(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (match_with_reverse(s + 1, l - 2));
	
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len;
	
	len = find_strlen(s);
	return (match_with_revers(s, len));
}

int main(void){

	char *st = "reverser";
	int x = find_strlen(st);
	printf("Before: %s\n", st);
	
	int val = is_palindrome(st);
	printf("Finale: %d\n", val);
	return (0);
}
