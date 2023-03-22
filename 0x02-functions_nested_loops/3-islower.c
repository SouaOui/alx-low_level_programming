#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	/*this is a function that test if letter is lowercase*/
	if ((c >= 'a') && (c <= 'z'))
	/*this is only for betty*/
		return (1);
	else
		return (0);
}
