/* Home Work No 5, exersize No 3 */

#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define N 15 /* Length of array */

int main(void)
{
	int i = 0, j = 0, flag = 0;
	int A[N] = { 0 };

	srand(time(NULL)); /* random generation on */

	/* Input random array */
	for (i = 0; i < N; ++i)
	{
		A[i] = rand() % 500; /* random number 0 - 500 */
	}

	/* Search same numbers */
	for (i = 0; i < N - 1; ++i)
	{
		if (A[i] == A[i - 1] && A[i] == A[i + 1])
		{
			flag = 1;
		}
	}

	/* Output array */
	for (i = 0; i < N; ++i)
	{
		printf("%d ", A[i]);
	}

	if (flag)
	{
		printf("\nYes\n");
	}
	else
	{
		printf("\nNo\n");
	}

	return (0);
}
