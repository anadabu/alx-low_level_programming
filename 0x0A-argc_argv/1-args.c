#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /** Suppresses unused parameter warning */

	printf("%d\n", argc - 1);

	return (0);
}

