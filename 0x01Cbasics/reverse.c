#include <stdio.h>

/**
 * main - prints natural numbers in reverse
 * Always:return 0.
 */

int main(void)
{
	int n;

	for (n = 10; n < 0; n--)
	{
		printf("%d\n", n);
	}
	return (0);
}
