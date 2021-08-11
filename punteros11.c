// PUNTEROS Y VECTORES

#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
	int vec[n], *p, *max, i;
	
	// ingreso de datos
	for ( p = vec; p < vec+n; p++)
		scanf("%d", p);
		
	// calculo de maximo
	for ( max = p = vec, i = 0; i<n; i++)
		if ( *(p+i) > *max )	
			max = p+i;
			
	// impresion
	printf("\n\n Max = %d", *max );
	printf("\n   Pos = %d", max-vec);
	
	return 0;
}
