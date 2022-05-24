#include <stdio.h>

int main() {
	float n1, n2, n3, media;
	
	printf("Digite a Primeira nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite a Segunda nota: ");
	scanf("%f", &n2);
	
	printf("\nDigite a Terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3.0;
	
	printf("\n\n A Media Aritmetica das notas e: %.2f", media);
}





