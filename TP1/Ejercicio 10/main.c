#include <stdio.h>

int main() {
    float valorVehiculo;
    int cantidadVehiculos;
    float sueldoBase = 500;
    float plusPorVehiculo;
    float comisionPorVehiculo = 50;
    float sueldo;

    // Pedir al usuario que ingrese el valor del veh�culo
    printf("Ingrese el valor del vehiculo: ");
    scanf("%f", &valorVehiculo);

    // Pedir al usuario que ingrese la cantidad de veh�culos vendidos
    printf("Ingrese la cantidad de vehiculos vendidos: ");
    scanf("%d", &cantidadVehiculos);

    // Calcular el plus por cada veh�culo vendido (10% del valor del veh�culo)
    plusPorVehiculo = valorVehiculo * 0.10;

    // Calcular el sueldo total
    sueldo = sueldoBase + (plusPorVehiculo + comisionPorVehiculo) * cantidadVehiculos;

    // Imprimir el sueldo
    printf("El sueldo del vendedor es: %.2f\n", sueldo);

    return 0;
}
