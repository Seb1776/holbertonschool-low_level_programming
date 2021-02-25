#include "holberton.h"
#include "2-strlen_recursion.c"
/**
* palindrome- Check if s[left] is equal to s[right]
* @s: String to be checked
* @l: Point for left char to be evaulated
* @r: Point for right char to be evaluated
* Return: (1) If No more to compare and all (0) If s is not a palindrome
*/
int palindrome(int l, int r, char *s)
{
	if (r > l)
		return (s[l] != s[r] ? 0 : palindrome(l + 1, r - 1, s));

	return (1);
}
/**
* is_palindrome- Returns 1 if a string is a palindrome and 0 if not
* @s: String
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	return (palindrome(0, (_strlen_recursion(s) - 1), s));
}
