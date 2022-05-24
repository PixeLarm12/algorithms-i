#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main() {
	float R, volume;
	
	printf("Digite o valor do raio da esfera (pode ser numero real): ");
	scanf("%f", &R);
	
	volume = (4 * pow(R, 3) * M_PI) / 3;
	
	printf("\n\n O valor do Volume dessa esfera de Raio %.2f e: %.2f", R, volume);
}



