// Seleccion de funcion a traves de punteros

#include <stdio.h>
#include <stdlib.h>

// Prototipos
int suma (int, int, int(*)(int));
int cuadrado(int);
int cubo(int);


int main()
{
	int a, b, seleccion;
	int ( *p[2]) (int);
	p[0] = cuadrado;
	p[1] = cubo;
	printf ("Suma de cuadrados : 0 		Suma de cubos: 1 	\n\n");
	
	// Menu
	scanf("%d", &seleccion);
	printf("\n\n Ingrese dos valores");
	
	// Ingreso de datos
	scanf("%d %d", &a, &b);
	printf("\n\n Resultado = %d", suma(a, b, p[seleccion]));
	
	return 0 ;
}

// Funciones
int cuadrado ( int x )
{ return x * x; }

int cubo ( int x )
{ return x * x * x; }

int suma ( int x, int y, int ( *ptr ) ( int ))
{ return (*ptr)(x) + (*ptr)(y); }


