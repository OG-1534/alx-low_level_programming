#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compares string characters
 * @s: string
 * @first: smallest iterator
 * @last: largest iterator
 * Return: int
 */
int compare_string(char *s, int first, int last)
{
	if (*(s + first) == *(s + last))
	{
		if (first == last || first == last + 1)
			return (1);
		return (0 + compare_string(s, first + 1, last - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if string is palindrome 0 if not
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
