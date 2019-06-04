/* Home Work No 5, exersize No 3 */

//#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define N 15 /* Length of array */

int main(void)
{
	int i = 0, j = 0, count = 1;
	int A[N] = { 0 };

	srand(time(NULL)); /* random generation on */

	/* Input random array */
	for (i = 0; i < N; ++i)
	{
		A[i] = rand() % 500; /* random number 0 - 500 */
	}

	/* Search same numbers */
	for (i = 0; i < N; ++i)
	{
		for (j = i + 1; j < N; ++j)
		{
			if (A[i] == A[j])
			{
				count++;
			}
		}
		
		if (count < 3)
		{
			count = 1;
		}
	}

	/* Output array */
	for (i = 0; i < N; ++i)
	{
		printf("%d ", A[i]);
	}

	if (count >= 3)
	{
		printf("\nYes\n");
	}
	else
	{
		printf("\nNo\n");
	}

	return (0);
}
