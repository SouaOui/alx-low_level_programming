#include "main.h"
#include<string.h>
/**
 * help_palindrome - function that check if a string is palindrome
 * @str: pointer to string
 * @left_index: integer value
 * @right_index: integer value
 * Return: 1 if the string is palindrome and 0 otherwise
 */
int help_palindrome(char *str, int left_index, int right_index)
{
	if (left_index >= right_index)
		return (1);
	else if (str[left_index] == str[right_index])
		return (help_palindrome(str, left_index + 1, right_index - 1));
	else
		return (0);
}
/**
 * is_palindrome - function that check if a string is palindrome
 * using recursion
 * @s: pointer to string
 * Return: 1 if the string @s is palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	int l, r;
	
	len = strlen(s);
	l = 0;
	r = len - 1;
	if (l >= r)
		return (1);
	else if (help_palindrome(s, l, r))
		return (1);
	else
		return (0);
}
