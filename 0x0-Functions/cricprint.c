#include <stdio.h>

/**
 * main - function prints strings.
 * @myCricut main function
 * @name- shows types of cricut
 * Return: Always 0.
 */

void myCricut(char name[])
{
	printf("My type of cricut is %s\n", name);
}
int main(void)
{
	myCricut("Joy");
	myCricut("Explore");
	myCricut("Maker");
	return (0);
}
