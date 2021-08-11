// Seleccion de funcion a traves de punteros

#include <stdio.h>
#include <stdlib.h>

int sumar (int, int);
int restar (int, int);

int main()
{
	int a, b, i;
	int ( *p[] )() = { sumar, restar};
	scanf("%d %d", &a, &b); //ingreso de datos
	
	do {
		printf("\n\nIngrese opcion: 0-Sumar		1-Restar  \n");
		scanf("%d", &i);
	}while ((i != 0 ) && ( i != 1 ));
	printf ("\n\n Resultado = %d", (*p[i]) (a,b));
	
	
	return 0 ;
}

int sumar ( int x, int y )
{ return x + y; }

int restar ( int x, int y )
{ return x - y; }
