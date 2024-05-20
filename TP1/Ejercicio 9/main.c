#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	// Ingresar el tiempo trabajado por un operario y considerando que el valor de la hora es de  10 pesos, calcular su sueld e imprimirlo
	
	float valor_hora = 10, sueldo, tiempo_trabajado;
	
	printf("Ingrese el tiempo trabajado: ");
	scanf("%f", &tiempo_trabajado);
	
	sueldo = valor_hora * tiempo_trabajado;
	
	printf("Sueldo empleado: %.2f", sueldo);
	return 0;
}
