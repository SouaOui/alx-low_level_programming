#include "main.h"
/**
* _isalpha - checks for lower character
* @c: The character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
