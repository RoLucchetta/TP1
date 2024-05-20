#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double l1, l2, perimetro, hipotenusa, superficie;
	
	printf("Ingrese el primer lado del triangulo rectangulo: ");
	scanf("%lf", &l1);
	printf("Ingrese el segundo lado del triangulo rectangulo: ");
	scanf("%lf", &l2);
	
	hipotenusa = sqrt(l1 * l1 + l2 * l2);
	perimetro = l1 + l2 + hipotenusa;
	superficie = (l1 * l2) / 2;
	
	printf("La hipotenusa del triangulo rectangulo es: %.2lf\n", hipotenusa);
	printf("La perimetro del triangulo rectangulo es: %.2lf\n", perimetro);
	printf("La superficie del triangulo rectangulo es: %.2lf\n", superficie);
	
	return 0;
}
