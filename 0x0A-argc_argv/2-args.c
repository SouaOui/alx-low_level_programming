#include "main.h"
/**
 * main - function that print all the arguments it receive
 * all the arguments should be printed including the first one
 * Followed by new line
 * @argc: number of commands
 * @argv: array that holds the arguments prompted when running
 * a program
 * Return: 0-Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
