#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	//Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo
	float valor_hora,sueldo, tiempo_trabajado;
	
	printf("Ingrese el valor de la hora: ");
	scanf("%f", &valor_hora);
	printf("Ingresar la cantidad de tiempo trabajado: ");
	scanf("%f", &tiempo_trabajado);

	sueldo = valor_hora * tiempo_trabajado;
	
	printf("Sueldo del empleado: %.2f", sueldo);
	return 0;
}

