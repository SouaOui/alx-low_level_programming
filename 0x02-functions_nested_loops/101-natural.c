#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, y = 0;

	for (i = 0; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			y += i;
	}
	printf("%d\n", y);
	return (0);
}
