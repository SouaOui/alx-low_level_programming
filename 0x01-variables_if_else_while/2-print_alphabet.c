#include<stdio.h>
/**
 * Entry point : main
 * Return : 0 (always success)
 *
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
