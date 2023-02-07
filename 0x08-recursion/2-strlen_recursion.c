/**
 * _strlen_recursion - return the length of a string
 * @s: string whose length will be calculated
 * 
 * Return: the length(int) of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return 0;
	}
}
