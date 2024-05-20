#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//10.	Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados
	int v1, v2, suma, producto, resta; 
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &v1);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &v2);
	
	suma = v1 + v2;
	producto = v1 * v2;
	resta = v1 - v2;
	
	printf("Suma: %d\n", suma);
	printf("Producto: %d\n", producto);
	printf("Resta: %d\n", resta);
	
	return 0;
}
