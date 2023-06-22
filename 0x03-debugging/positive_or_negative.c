#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - Determines if a number is positive, negative or zero.
*@n: integer
* Return: Always 0 (Success)
*/

void positive_or_negative(int n)
{
	srand(time(0));

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
