#include <stdio.h>
#include <math.h>

int main() {
	float x, y; //pow function expects double values as parameter
	
	printf("Digite o valor do algarismo que sera base da potencia: ");
	scanf("%f", &x);
	
	printf("\nDigite o valor do algarismo que sera expoente da potencia: ");
	scanf("%f", &y);
	
	printf("\n\n O valor de %.0f elevado a %.0f e igual a: %.0f", x, y, pow(x,y));
}





