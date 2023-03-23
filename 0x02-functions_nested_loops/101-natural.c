#include "main.h"
#include<stdio.h>
/**
 * print_sum_below_1024 - print sum of multiple five and three numbers
 */
void print_sum_below_1024(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("sum is : %d\n", sum);
}
