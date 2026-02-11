#include <stdio.h>

int main() {
	int numeros[100];

	for(int i=0; i<100;i=i+1){
		numeros[i]=i;

	}

	for(int i=0; i<100;i=i+1){
		printf("localidad: %d, valor:%d \n",i,numeros[i]);
	}

    return 0;
}
