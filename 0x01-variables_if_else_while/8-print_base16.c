#include<stdio.h>
/**
 * main - Entry point
 * program that print all hexadecimal numbers
 * Return : Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	/* Return : 0 passed */
	return (0);
}
