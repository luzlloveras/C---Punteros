#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A;
	int * P;
	float * Q;
	
	A = 25;
	P = &A;
	Q = (float *)P;
	
	printf ("\n\n p = %p 	Q = %p	\n\n\n", P, Q);
	
//	P = (int *)0X22FEB8;
	
	printf ("\n\n P = %p 	Q = %p	\n\n\n", P, Q);	
	
	
	printf ("\n\n *P = %d 	*Q = %f	\n\n\n", *P, *Q);	
	
	return 0;
}
