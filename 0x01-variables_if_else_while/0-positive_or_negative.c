#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*main - Prints a random number and states whether it is positive negative or zero
*
*Description: This program will assign a random number to the variable n each time it is executed
*
*Return: Always 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%1 is positive\n", n);
	else if (n == 0)
		printf("%1 is zero\n", n);
	else
		printf("%1 is negative\n", n);
	return (0);
}
