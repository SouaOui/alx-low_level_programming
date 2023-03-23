#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Calculates first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long A = 0;
	unsigned long B = 1;
	unsigned long C;

	for (i = 0; i < 50; i++)
	{
		C = A + B;

		printf("%lu", C);
		A = B;
		B = C;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
