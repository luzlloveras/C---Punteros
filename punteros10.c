// PUNTEROS Y VECTORES

#include <stdio.h>
#include <stdlib.h>
#define N 8

int main()
{
	int VEC[N];
	int *P, *PMIN, *PAUX;
	int i, j;

		
	// Carga del vector	
	for ( P = VEC ; P < VEC+N ; P++)
	{
		printf (" \n  DATO = ");
		scanf("%d", P);
	}
	
	// Impresión 
	for ( P = VEC ; P < VEC+N ; P++)	
		printf ("%8d", *P );

	// Búsqueda del minimo
	printf("\n\n\t\t Impresion del vector\n\n\t\t");
	for ( PMIN = P = VEC ; P < VEC+N ; P++)	
		if ( *P < *PMIN )
			PMIN = P;
			
	printf("\n\n\n EL VALOR MINIMO ES %d", *PMIN );
	printf("\n\n\n Y SU POSICION ES %d \n", PMIN - VEC );


	
	return 0;
}
