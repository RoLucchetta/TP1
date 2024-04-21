#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v1=0;
	int v2=0;
	int resultado=0;
	
	printf("Ingrese numero 1: ");
	scanf("%d", &v1);
	printf("Ingrese numero 2: ");
	scanf("%d", &v2);
	
	resultado = v1 + v2;
	
	printf("El resultado es: %d ", resultado);
	
	return 0;
	
	}
