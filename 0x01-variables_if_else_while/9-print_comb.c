#include<stdio.h>
/*
 * This program will print all possible combinations of one digit
 * Return 0 : always ( Success )
 * Main function
 */
int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
		if (a != '9')
			putchar(',');
	}
	putchar('\n');
	return (0);
}
