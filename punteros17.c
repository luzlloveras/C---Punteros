// VECTOR DE PUNTEROS A ESTRUCTURA
// MANEJO DE VECTOR DE ESTRUCTURAS MEDIANTE VECTOR DE PUNTEROS

#include <stdio.h>
#include <stdlib.h>
#define N 3

struct ALUMNO {
	char NOM[20];
	char SEX;
	int NOTA;
};

int main()
{	
	struct ALUMNO VEC[N], *P;
	struct ALUMNO * VP[N], * PAUX;
	int i, j;
	
	// INICIALIZACION DEL VECTOR DE PUNTEROS
	for ( i = 0; i < N; i++)
//		VP[i] = &VEC[i]; 		aritmetica de subindices
		*(VP+i) = VEC+i;	// aritmetica de punteros
	
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
	
	printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS \n ");
	printf("\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( P = VEC; P < VEC+N;P++)
		printf("\n\n\t %-15s %8c %10d", P->NOM, P->SEX, P->NOTA);
	getchar(); getchar(); 
	
	
	printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS \n ");
	printf("\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( i = 0; i < N; i++)
		printf("\n\n\t %-15s %8c %10d", (*(VP+i))->NOM, (*(VP+i))->SEX, (*(VP+i))->NOTA );
	getchar();
	
	
	// ordenamiento 
	for ( i = 0; i < N-1; i++)
		for ( j = 0 ; j < N-i-1; j++)
			if ( (*(VP+j))->NOTA < (*(VP+j+1))->NOTA )
			{
				PAUX = *(VP+j);
				*(VP+j) = *(VP+j+1);
				*(VP+j) = PAUX;
			}
		
	printf("\n\n\n\n\t\t BARRIENDO CON VECTOR DE PUNTEROS \n ");
	printf("\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( i = 0; i < N; i++)
		printf("\n\n\t %-15s %8c %10d", (*(VP+i))->NOM, (*(VP+i))->SEX, (*(VP+i))->NOTA );
	getchar();
	

	printf("\n\n\n\n\t\t BARRIENDO VECTOR DE ESTRUCTURAS \n ");
	printf("\n\t %-15s %8s %10s\n", "NOMBRE", "SEXO", "NOTA");
	for ( P = VEC, i = 0; i<N;i++)
		printf("\n\n\t %-15s %8c %10d", (P+i)->NOM, (*(P+i)).SEX, (P+i)->NOTA);
	getchar(); getchar(); 
	
	return 0;
}
