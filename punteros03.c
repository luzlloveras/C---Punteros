//aritmetica de punteros

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * P, * Q;
		
	
	P = (int *)0x2000;
	Q = (int *)0x200A;
	
	printf("\n\n Q = %p P = %p	 \n\n", Q , P);	
	printf("\n\n Q - P = %d	 \n\n", Q - P);	
		
	
	return 0;
}





