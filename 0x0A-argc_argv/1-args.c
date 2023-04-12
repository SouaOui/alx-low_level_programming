#include "main.h"
/**
 * main - function that print the number of arguments passed to it
 * Followed by new line
 * @argc: number of commands arguments
 * @argv: array that holds the commands arguments when prompted to run
 * the program
 * Return: returns 0-Sucess
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
