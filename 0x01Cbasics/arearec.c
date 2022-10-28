#include <stdio.h>

/**
 * main - calculates area of rectangle.
 * Return: Always 0.
 */

int main(void)
{
	int length, width, area;

	printf("Enter the length\n");
	scanf("%d", &length);

	printf("Enter the width\n");
	scanf("%d", &width);

	area = length * width;
	printf("The area is: %d\n", area);

	return (0);
}
