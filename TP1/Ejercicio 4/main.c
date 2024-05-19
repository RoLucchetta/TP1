#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
int l1,l2,l3, perimetro; 

	printf("Ingrese el valor del 1er lado: ");
	scanf("%d", &l1);
	printf("Ingrese el valor del 2do lado: ");
	scanf("%d", &l2);
	printf("Ingrese el valor del 3er lado: ");
	scanf("%d", &l3);
	
	perimetro = l1 + l2 + l3;
	printf("El perimetro del triángulo es: %d", perimetro);
	
	return 0;
}
