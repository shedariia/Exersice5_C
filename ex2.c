/* Home Work No 5, exersize No 2 */

#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */

#define L 70 /* Length of array */

int main(void)
{
	int n = 0;
	int A[L] = { 0 }, B[L] = { 0 }, C[L] = { 0 };

	A[0] = 5;
	A[1] = 2;
	B[0] = -1;
	B[1] = 2;
	B[2] = 5;

	/* Input array A */
	for (n = 2; n < L; ++n)
	{
		A[n] = A[n - 2] - A[n - 1];
	}

	/* Input array B */
	for (n = 3; n < L; ++n)
	{
		B[n] = B[n - 3] - B[n - 2] - B[n - 1];
	}

	/* Input array C */
	for (n = 0; n < L; ++n)
	{
		C[n] = A[n] + B[n];
	}

	/* Output arrays A, B, C */
	for (n = 0; n < L; ++n)
	{
		printf("A[%d] = %d\t", n, A[n]);
		printf("B[%d] = %d\t", n, B[n]);
		printf("C[%d] = %d\n", n, C[n]);
	}

	return (0);
}