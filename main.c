#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int cir; 
	
	printf("Este programa calcula el radio de un circulo de acuerdo a su circunferencia \n");
	
	printf("dame la circunferencia del circulo ");
	scanf("%d", &cir);
	
	float r = cir / (2 * 3.14);
	
	printf("El radio del circulo es: %f", r);
	
	return 0;
}

