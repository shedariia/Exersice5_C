/* Home Work No 5, exersize No 3 */

//#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define N 15 /* Length of array */
#define EQUAL_NUMS 3

int main(void)
{
	int i = 0, j = 0,  cntEqualsNums;
	int A[N] = { 0 };

	srand(time(NULL)); /* random generation on */

	/* Input random array */
	for (i = 0; i < N; ++i)
	{
		A[i] = rand() % 500; /* random number 0 - 500 */
	}

	/* Search same numbers */
	for (i = 0; i < N && cntEqualsNums < EQUAL_NUMS; ++i)
	{
		cntEqualsNums = 1;
		for (j = i + 1; j < N ; ++j)
		{
			if (A[i] == A[j])
			{
				cntEqualsNums++;
			}
		}
	}

	/* Output array */
	for (i = 0; i < N; ++i)
	{
		printf("%d ", A[i]);
	}

	if (cntEqualsNums >= EQUAL_NUMS)
	{
		printf("\nYes\n");
	}
	else
	{
		printf("\nNo\n");
	}

	return (0);
}
