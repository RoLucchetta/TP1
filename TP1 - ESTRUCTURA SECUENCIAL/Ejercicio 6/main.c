#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double l1, l2, superficie, perimetro, diagonal_principal;
	
	printf("Ingrese el valor del primer lado del rectangulo: ");
	scanf("%lf", &l1);
	printf("Ingrese el valor del segundo lado del rectangulo: ");
	scanf("%lf", &l2);
	
	diagonal_principal = sqrt(l1 * l1 + l2 * l2);
	superficie = l1 * l2;
	perimetro = l1 * 2 + l2 * 2 ;
	
	printf("Diagonal principal: %.2lf\n", diagonal_principal);
	printf("Superficie: %.2lf\n", superficie);
	printf("Perimetro: %.2lf", perimetro);
	return 0;
}
