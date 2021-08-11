// PUNTEROS Y VECTORES

#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{	
	int vec[n], *p, i, j, aux;
	
	// ingreso datos
	for ( p = vec; p < vec+n; p++)
		scanf("%d", p);
		
	//impresion
	for ( p = vec, i=0; i<n; i++)
		printf("\n  valor = %d", p[i]);
		
	for ( i=0; i<n-1; i++)
		for ( j=0; j<n-i-1; j++)
		printf("\nComparando %d y %d\n", p[j], p[j+1]);
			if ( *(p+j) < *(p+j+1) )
			{
				//swapping
				aux = *(p+j);
				p[j] = *(p+j+1);
				p[j+1] = aux;
			}

	//impresion
	for ( p = vec, i=0; i<n; i++)
		printf("\n  valor = %d", p[i]);

	return 0;
}



