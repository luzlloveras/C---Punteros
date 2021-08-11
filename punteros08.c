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
	for ( P = VEC ; P < VEC+N ; P++)
	{
		printf (" \n  DATO = ", I);
		scanf("%d", P);
	}
	
	// Impresión 1 del vector	
	printf("\n\n\t\t Impresion 1 del vector\n\n\t\t");
	for ( P = VEC ; P < VEC+N ; P++)	
		printf ("%8d", *P );
	
	// Impresión 2 del vector	
	printf("\n\n\t\t Impresion 2 del vector\n\n\t\t");
	for ( P = VEC, I = 0 ; I < N ; I++)	
		printf ("%8d", *(P+I) );
	
	
	return 0;
}
