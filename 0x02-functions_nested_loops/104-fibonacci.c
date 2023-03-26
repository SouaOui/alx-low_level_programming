#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: print the first 98 numbres including 1 and 2 no hard code
 *
 * followed by comma then space
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int i;
	unsigned long A = 0;
	unsigned long B = 1;
	unsigned long C;

	for (i = 0; i <= 98; i++)
	{
		C = A + B;
		printf("%lu", C);
		A = B;
		B = C;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
