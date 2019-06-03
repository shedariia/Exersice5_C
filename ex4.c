/* Home Work No 5, exersize No 4 */

//#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define N 20 /* Length of array */

int main(void)
{
	int i = 0, counter = 0;
	int A[N] = { 0 }, B[N] = { 0 };

	srand(time(NULL)); /* random generation on */

	/* Input random array */
	for (i = 0; i < N; ++i)
	{
		A[i] = rand() % 2; /* random number 0 - 1 */
	}

	for (i = 0; i < N; ++i)
	{
		if (A[i] == 1)
		{
			counter++;
		}
		else if (counter > 0)
		{
			B[counter - 1]++;
			counter = 0;
		}
	}

	/* Output array A */
	for (i = 0; i < N; ++i)
	{
		printf("%d", A[i]);
	}

	printf("\n");

	/* Output array B */
	for (i = 0; i < N; ++i)
	{
		if (B[i] != 0)
		{
			printf("%d units %d times\n", i + 1, B[i]);
		}
	}

	return (0);
}
