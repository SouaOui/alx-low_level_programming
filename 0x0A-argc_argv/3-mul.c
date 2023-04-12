#include "main.h"
/**
 * main - function that print the result of multiplication
 * Followed by new line
 * @argc: number of commands
 * @argv: array that holds the commands prompted when
 * Return: 1-Failed and 0 otherwise
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
