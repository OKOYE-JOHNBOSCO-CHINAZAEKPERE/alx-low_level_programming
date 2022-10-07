#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc == 3)
	{
		if (isdigit(*argv[1]) && isdigit(*argv[2]))
		{
			for (i = 1; i < argc; i++)
				mul *= atoi(argv[i]);
			printf("%d\n", mul);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
