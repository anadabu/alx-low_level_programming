#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /** Suppresses unused parameter warning */

	printf("%s\n", argv[0]);

	return (0);
}

