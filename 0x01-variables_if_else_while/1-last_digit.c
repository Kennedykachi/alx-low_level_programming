nclude <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", lastNuNum);
	}
	else
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", lastNnum);
	}
	return (0);
}
