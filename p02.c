#include <stdio.h>
#include <stdlib.h>

int main()
{
 	char str[] = "Hola mundo";
 	char *p = str;
 	while (*p++);
 	printf("La longitud es %d", p - str);
			
		return 0 ;
}
