#include <stdio.h>

/**
 * main - prints array at run time.
 * using a sequential for loop.
 * Return: Always 0.
 */

int main(void)
{
	int toppers[6];
	int i;

	printf("Enter the numbers\n");
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &toppers[i]);
	}
	for (i = 0; i < 6; i++)
	{

		printf("%d\n", toppers[i]);
	}
		return (0);
}
