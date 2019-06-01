/* Home Work No 5, exersize No 6 */

#include "pch.h"
#include <stdio.h>	/* printf(), scanf() */
#include <stdlib.h>	/* srand(), rand() */
#include <time.h>	/* time() */

#define L 10
#define L_RANG 13
#define L_SUIT 4

int main(void)
{
	int i = 0, j = 0, rang = 0, suit = 0, ser1 = 0, ser2 = 0;
	const char R[L_RANG] = { '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e' };
	const char S[L_SUIT] = { 'C', 'H', 'P', 'T' };
	int temp = 0;
	int R1[L] = { 0 }, S1[L] = { 0 }; /* output arrays */

	srand(time(NULL)); /* random generation on */

	/* Array Random genetation */
	for (i = 0; i < L; ++i)
	{
		rang = rand() % L_RANG; /* indexes 0 - 12 */
		suit = rand() % L_SUIT; /* indexes 0 - 3 */

		R1[i] = R[rang];
		S1[i] = S[suit];
	}

	/* Simple search same cards */
	for (i = 0; i < L; ++i)
	{
		for (j = i + 1; j < L; ++j)
		{
			if (R1[i] == R1[j] && S1[i] == S1[j])
			{
				rang = rand() % L_RANG; /* indexes 0 - 12 */
				suit = rand() % L_SUIT; /* indexes 0 - 3 */

				R1[i] = R[rang];
				S1[i] = S[suit];
			}
		}
	}

	/* Simple bubble sort */
	for (i = 0; i < L - 1; ++i)
	{
		for (j = 0; j < L - i - 1; ++j)
		{
			if (R1[j] > R1[j + 1])
			{
				/* Swap rang */
				temp = R1[j];
				R1[j] = R1[j + 1];
				R1[j + 1] = temp;

				/* Swap suite */
				temp = S1[j];
				S1[j] = S1[j + 1];
				S1[j + 1] = temp;
			}
		}
	}

	/* Search series of cards */
	for (i = 2; i < L; ++i)
	{
		if (R1[i] == (R1[i - 1] + 1) && R1[i - 1] == (R1[i - 2] + 1) && S1[i] < 'I' && S1[i - 1] < 'I' && S1[i - 2] < 'I')
		{
			ser1 = 1;
		}

		if (R1[i] == (R1[i - 1] + 1) && R1[i - 1] == (R1[i - 2] + 1) && S1[i] > 'I' && S1[i - 1] > 'I' && S1[i - 2] > 'I')
		{
			ser2 = 1;
		}
	}

	/* Output Array */
	for (i = 0; i < L; ++i)
	{
		/* to card view */
		switch (S1[i])
		{
			case 'a':
				S1[i] = 't';
				break;
			case 'b':
				S1[i] = 'j';
				break;
			case 'c':
				S1[i] = 'q';
				break;
			case 'd':
				S1[i] = 'k';
				break;
			case 'e':
				S1[i] = 'a';
				break;
		}
		printf("%c%c ", R1[i], S1[i]);
	}

	/* Output answer */
	if (ser1 || ser2)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}

	return (0);
}