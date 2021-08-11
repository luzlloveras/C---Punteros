// PUNTEROS A ESTRUCTURAS
// MANEJO DE VECTOR DE ESTRUCTURAS MEDIANTE PUNTEROS

#include <stdio.h>
#include <stdlib.h>
#define N 8

struct ALUMNO {
	char NOM[20];
	char SEX;
	int NOTA;
};

int main()
{	
	struct ALUMNO VEC[N], *P;
	struct ALUMNO AUX;
	int i, j;
	
	// CARGA
	for ( P = VEC; P < VEC+N ; P++) {
		fflush(stdin);
		printf("\n\n\t\t Nombre : ");
		gets( P->NOM );
		printf("\n\t\t Sexo : ");
		P->SEX = getchar();
		printf("\n\t\t Nota : ");
		scanf("%d", &(P->NOTA) );
	}
	
	// IMPRESION 1
	printf("\n\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( P = VEC; P < VEC+N ; P++)
		printf("\n\n\t %-15s %8c %10d", P->NOM, P->SEX, P->NOTA);
	getchar(); getchar();
	

	// ordenamiento 
	P = VEC;
	for ( i = 0; i < N-1; i++)
		for ( j = 0 ; j < N-i-1; j++)
			if ( (P+j)->NOTA < (P+j+1)->NOTA )
			{
				AUX = *(P+j);
				*(P+j) = *(P+j+1);
				*(P+j+1) = AUX;
			}
	
	// IMPRESION 2
	printf("\n\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( P = VEC, i = 0; i < N; i++)
		printf("\n\n\t %-15s %8c %10d", (P+i)->NOM, (*(P+i)).SEX, (P+i)->NOTA);
	getchar(); getchar();
		
	return 0;
}
