#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print the sum of even fibonacci number under 4000000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long A = 0, B = 1, C, sum = 0;

	for (i = 0; i < 40; i++)
	{
		C = A + B;
		A = B;
		B = C;

		if (C % 2 == 0 && C < 4000000)
		{
			sum += C;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
