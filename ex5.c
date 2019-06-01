/* Home Work No 5, exersize No 5 */

#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define N 60 /* Length of array */

int main(void)
{
	int i = 0, j = 0, min = 50, max = 17, average = 0, counter = 1, temp = 0;
	int A[N] = { 0 }, B[33] = { 0 };

	srand(time(NULL)); /* random generation on */

	/* Input random array */
	for (i = 0; i < N; ++i)
	{
		A[i] = rand() % 34 + 17; /* random number 17 - 50 */

		if (A[i] > max)
		{
			max = A[i];
		}

		average += A[i];
	}

	average /= N;

	/* Sorting */
	for (i = 0; i < N - 1; ++i)
	{
		for (j = 0; j < N - i - 1; ++j)
		{
			if (A[j] > A[j + 1])
			{
				/* Swap */
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	/* Counter years */
	for (i = 0; i < 33; ++i)
	{
		B[A[i] - 17]++;
	}

	/* Bigger average in 3 years */
	for (i = 0; i < N; ++i)
	{
		if (A[i] >= average + 3)
		{
			counter++;
		}
	}

	/* Output array A */
	for (i = 0; i < N; ++i)
	{
		printf("%d ", A[i]);
	}

	/* Minimum years */
	for (i = 0; i < 33; ++i)
	{
		if (B[i] < min)
		{
			min = B[i] + 17;
		}
	}

	/* Output answer */
	printf("\nMin year = %d\n", min);
	printf("Max = %d\n", max);
	printf("Average = %d\n", average);
	printf("Counter = %d\n", counter);

	return (0);
}