#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v1,v2,v3, valor_total;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &v1);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &v2);
	printf("Ingrese el tercer valor: ");
	scanf("%d", &v3);
	
	valor_total = v1 + v2 + v3 ;
	printf("La suma es: %d", valor_total);
	
	return 0;
}
