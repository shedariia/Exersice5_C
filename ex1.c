/* Home Work No 5, exersize No 1 */

//#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define L 80 /* Length of array */

int main(void)
{
	int i = 0, b = 0, e = L - 1; /* b - begin of array, e - end of array */
	int A[L] = { 0 }, B[L] = { 0 };

	srand(time(NULL)); /* random generation on */

	for (i = 0; i < L; ++i)
	{
		A[i] = rand() % 200; /* random number 0 - 200 */

		if (A[i] >= 100)
		{
			B[b++] = A[i];
		}
		else
		{
			B[e--] = A[i];
		}
	}

	/* Output array before changes */
	for (i = 0; i < L; ++i)
	{
		printf("%d ", A[i]);
	}

	printf("\n");

	/* Output array after changes */
	for (i = 0; i < L; ++i)
	{
		printf("%d ", B[i]);
	}

	return (0);
}
