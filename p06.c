// Seleccion de funcion a traves de punteros

#include <stdio.h>
#include <stdlib.h>


void alarma1 ();
void alarma2 ();
void alarma3 ();
void alarma4 ();
void alarma5 ();
void alarma6 ();
void alarma7 ();
void alarma8 ();

int main()
{
	void (*pf[])() = { alarma1, alarma2, alarma3, alarma4, alarma5, alarma6, alarma7, alarma8 }	;
	unsigned char dato, mascara, i;
	
	while (1) {				// Bucle infinito
		dato = inb(0x44); 	// Ingreso de informacion
		mascara = 1;		// Filtro para cada alarma
	
		for( i = 0 ; i < 8 ; i++ , mascara <<=1 )
			if ( dato & mascara)
				(*pf[i])();	
	}
		
	return 0 ;
}

