#include <stdio.h>
#include <stdlib.h>


int main()
{
	int matriz[][5] = { {10,12,14,16,18},
						{20,22,24,26,28},
						{30,32,34,36,38},
						{40,42,44,46,48} };
	
	int i, k;
	
	//usando arrays
	for (i=0; i<4;i++){
	
		printf("\n\n\t\t\t");
		for (k=0;k<5;k++)
			printf("%5d", matriz[i][k]);
	}
	
	
	
	return 0 ;
}
