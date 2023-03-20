#include<stdio.h>
/*
 * function main() : Entry point
 * Return : 0 always sucess
 * this program print all smalesst combination of two digits
 */
int main(void)
{
	int i;
	int j;

	/*here is my code*/
	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i != j)
			{	putchar(i);
				putchar(j);
			}
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
