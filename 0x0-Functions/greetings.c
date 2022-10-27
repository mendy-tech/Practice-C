#include <stdio.h>

/**
 * has 3 functions that print greetings
 */

void goodMorning(void)
{
	printf("Good Morning\n");
}
void goodAfternoon(void)
{
	printf("Good Afternoon\n");
}
void goodNight(void)
{
	printf("Good Night\n");
}

/**
 * main - prints greetings.
 * Return: Always 0.
 */

int main(void)
{
	goodMorning();
	goodAfternoon();
	goodNight();
	return (0);
}
