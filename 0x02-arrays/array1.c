#include <stdio.h>

/*
 * main - prints a one dimensional array at compile time
 * uses a sequential for loop
 * Return: Always 0.
 */

int main(void)
{
	int cakes[8] = {48, 36, 23, 28, 79, 37, 80, 57};
	int i;

	for (i = 0; i < 8; i++)
	{

		printf("%d\n", cakes[i]);
	}
		return (i);
}
