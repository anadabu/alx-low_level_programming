#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs multiplication
 * @argc: The argument count
 * @argv: The argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("%s\n", "Error");

	return (0);
}

