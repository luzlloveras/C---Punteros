// PUNTEROS Y VECTORES

#include <stdio.h>
#include <stdlib.h>
#define N 8

int main()
{
	int VEC[N];
	int I;
	int *P;
		
	// Carga del vector	
	for ( I = 0 ; I < N ; I++)	
	{
		printf (" \n  VEC[%d] = ", I);
		scanf("%d", &VEC[I]);
	}
	
	// Impresión 1 del vector	
	printf("\n\n\t\t Impresion 1 del vector\n\n\t\t");
	for ( I = 0 ; I < N ; I++)	
		printf ("%d\t", VEC[I]);
	
	
	return 0;
}
