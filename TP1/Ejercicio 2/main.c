#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declaro el tipo de todas las variables
    int v1, v2, v3, primer_valor, valor_total;
    
    //Se solicita al usuario primer valor a sumar y guardamos el resultado. 
    printf("Ingrese el primer valor: ");
    scanf("%d", &v1);
    
    //Se solicita al usuario segundo valor a sumar y guardamos el resultado. 
    printf("Ingrese el segundo valor: ");
    scanf("%d", &v2);
    
    //Se solicita al usuario tercer valor a sumar y guardamos el resultado. 
    printf("Ingrese el tercer valor: ");
    scanf("%d", &v3);
    
    //Se realiza la suma de los dos primeros valores enteros, y al resultado de esto ultimo se le suma el tercer valor entero. 
    primer_valor = v1 + v2;
    valor_total = primer_valor + v3;
    
    //Se imprime el resultado. 
    printf("El resultado es: %d", valor_total);
    
    return 0;
}
