#include <stdio.h>

#define PORCENTAGEM_IMPOSTO 0.05 //5%

int main() {
	float salario;
	
	printf("Digite o valor do seu salario: ");
	scanf("%f", &salario);
		
	printf("\n\n O valor de imposta a pagar e: %.2f reais", salario * PORCENTAGEM_IMPOSTO);
}


