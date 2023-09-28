#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int get_length(char *s);
	int my_pal(char *s, int l);
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}

/**
 * get_length - fetch string's length
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * my_pal - Check if a string is a palindrome using recursion
 * @s: string s
 * @l: string length
 * Return: 1 if palindrome, else 0
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}

